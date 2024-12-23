import webbrowser
import sys

def open_urls_from_file(filename):
    """
    Opens URLs from a text file, cleans up the file, and opens them in the default browser.

    Args:
        filename: The name of the input file.
    """

    with open(filename, 'r+') as f:
        lines = f.readlines()
        urls = [line.strip() for line in lines if line.strip()]  # Remove empty lines and whitespace

        # Write cleaned URLs back to the file
        f.seek(0)
        f.truncate()
        f.write('\n'.join(urls))

        for url in urls:
            if url.startswith('~'):
                continue
            webbrowser.open(url)

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python script.py <filename>")
        sys.exit(1)

    filename = sys.argv[1]
    open_urls_from_file(filename)