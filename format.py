import os
def process_file(filename, new_lines, search_string):
    """
    Processes a file by:
    1. Finding the line starting with search_string and removing all lines after it.
    2. Appending new lines to the remaining lines.
    3. Writing the updated lines back to the file.
    """

    with open(filename, 'r') as file:
        lines = file.readlines()

    found = False
    for i, line in enumerate(lines):
        if line.startswith(search_string):
            lines = lines[:i]
            found = True
            break

    if not found:
        print(f"No line starting with '{search_string}' found in the file.")
        return

    lines.extend(new_lines)
    lines = [line.rstrip('\n') for line in lines]  # Remove trailing newline characters

    with open(filename, 'w') as file:
        for line in lines:
            file.write(line + '\n')


def get_cpp_files(folder_name):
    """Returns a list of all .cpp files in the given folder and its subfolders."""

    cpp_files = []
    for root, dirs, files in os.walk(folder_name):
        for file in files:
            if file.endswith('.cpp'):
                cpp_files.append(os.path.join(root, file))
    return cpp_files


# Example usage:
search_string = 'void Test(const std::string& inputfile, const std::string& outputfile)'
new_lines = [
    '// write gtests here',
    'int main() {',
    '::testing::InitGoogleTest();',
    'return RUN_ALL_TESTS();',
    '}'
]
s = "WEEK"
for i in range(1, 11):  # Assuming folders are named '1', '2', ..., '10'
    folder = s + str(i)
    cpp_files = get_cpp_files(folder)
    if not cpp_files:
        print(f"No .cpp files found in '{folder}'.")
        continue

    for file in cpp_files:
        process_file(file, new_lines, search_string)