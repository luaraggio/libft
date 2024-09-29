<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
  <h1>Libft</h1>
    <h2>Table of Contents</h2>
    <ul>
        <li><a href="#program-name">Program Name</a></li>
        <li><a href="#files">Files</a></li>
        <li><a href="#external-functions">External Functions</a></li>
        <li><a href="#description">Description</a></li>
        <li><a href="#technical-considerations">Technical Considerations</a></li>
        <li><a href="#part-1-libc-functions">Part 1 - Libc Functions</a></li>
        <li><a href="#part-2-additional-functions">Part 2 - Additional Functions</a></li>
        <li><a href="#bonus-functions">Bonus Functions</a></li>
    </ul>
    <h2 id="program-name">Program Name</h2>
    <p><strong>libft.a</strong></p>
    <h2 id="files">Files</h2>
    <ul>
        <li>Makefile</li>
        <li>libft.h</li>
        <li>ft_*.c (all your implementation files)</li>
    </ul>
    <h3>Makefile</h3>
    <p>The Makefile should contain the following targets:</p>
    <ul>
        <li><strong>NAME:</strong> to create the library.</li>
        <li><strong>all:</strong> to compile all source files.</li>
        <li><strong>clean:</strong> to remove object files.</li>
        <li><strong>fclean:</strong> to remove the library and object files.</li>
        <li><strong>re:</strong> to recompile everything.</li>
    </ul>
    <h2 id="external-functions">External Functions</h2>
    <p>N/A</p>
    <h2 id="description">Description</h2>
    <p>The libft library is a collection of useful functions designed to support your cursus by providing a set of functionalities similar to those found in the standard C library.</p>
    <h2 id="technical-considerations">Technical Considerations</h2>
    <ul>
        <li>Declaring global variables is forbidden.</li>
        <li>If you need helper functions to split a more complex function, define them as static functions. This limits their scope to the appropriate file.</li>
        <li>Place all your files at the root of your repository.</li>
        <li>Turning in unused files is forbidden.</li>
        <li>Every .c file must compile with the flags -Wall -Wextra -Werror.</li>
        <li>Use the command ar to create your library. Using the libtool command is forbidden.</li>
        <li>Your libft.a has to be created at the root of your repository.</li>
    </ul>
    <h2 id="part-1-libc-functions">Part 1 - Libc Functions</h2>
    <p>In this part, you will implement a set of functions from the libc. Your functions will have the same prototypes and behaviors as the originals but will be prefixed with <code>ft_</code>.</p>
    <h3>Functions to Implement</h3>
    <ul>
        <li><code>isalpha</code></li>
        <li><code>isdigit</code></li>
        <li><code>isalnum</code></li>
        <li><code>isascii</code></li>
        <li><code>isprint</code></li>
        <li><code>strlen</code></li>
        <li><code>memset</code></li>
        <li><code>bzero</code></li>
        <li><code>memcpy</code></li>
        <li><code>memmove</code></li>
        <li><code>strlcpy</code></li>
        <li><code>strlcat</code></li>
        <li><code>toupper</code></li>
        <li><code>tolower</code></li>
        <li><code>strchr</code></li>
        <li><code>strrchr</code></li>
        <li><code>strncmp</code></li>
        <li><code>memchr</code></li>
        <li><code>memcmp</code></li>
        <li><code>strnstr</code></li>
        <li><code>atoi</code></li>
        <li><code>calloc</code> (requires <code>malloc()</code>)</li>
        <li><code>strdup</code> (requires <code>malloc()</code>)</li>
    </ul>
    <h2 id="part-2-additional-functions">Part 2 - Additional Functions</h2>
    <p>In this second part, you must develop functions that are either not in the libc or are presented in a different form.</p>
    <h3>Functions to Implement</h3>
    <ul>
        <li><code>ft_substr:</code> <code>char *ft_substr(char const *s, unsigned int start, size_t len);</code>
            <p>Allocates and returns a substring from the string s.</p>
        </li>
        <li><code>ft_strjoin:</code> <code>char *ft_strjoin(char const *s1, char const *s2);</code>
            <p>Allocates and returns a new string, the result of concatenating s1 and s2.</p>
        </li>
        <li><code>ft_strtrim:</code> <code>char *ft_strtrim(char const *s1, char const *set);</code>
            <p>Allocates and returns a copy of s1 with specified characters trimmed from the beginning and end.</p>
        </li>
        <li><code>ft_split:</code> <code>char **ft_split(char const *s, char c);</code>
            <p>Allocates and returns an array of strings split from s using c as a delimiter.</p>
        </li>
        <li><code>ft_itoa:</code> <code>char *ft_itoa(int n);</code>
            <p>Allocates and returns a string representing the integer n.</p>
        </li>
        <li><code>ft_strmapi:</code> <code>char *ft_strmapi(char const *s, char (*f)(unsigned int, char));</code>
            <p>Applies function f to each character of the string s and creates a new string.</p>
        </li>
        <li><code>ft_striteri:</code> <code>void ft_striteri(char *s, void (*f)(unsigned int, char*));</code>
            <p>Applies function f on each character of s.</p>
        </li>
        <li><code>ft_putchar_fd:</code> <code>void ft_putchar_fd(char c, int fd);</code>
            <p>Outputs the character c to the given file descriptor.</p>
        </li>
        <li><code>ft_putstr_fd:</code> <code>void ft_putstr_fd(char *s, int fd);</code>
            <p>Outputs the string s to the given file descriptor.</p>
        </li>
        <li><code>ft_putendl_fd:</code> <code>void ft_putendl_fd(char *s, int fd);</code>
            <p>Outputs the string s followed by a newline to the given file descriptor.</p>
        </li>
        <li><code>ft_putnbr_fd:</code> <code>void ft_putnbr_fd(int n, int fd);</code>
            <p>Outputs the integer n to the given file descriptor.</p>
        </li>
    </ul>
    <h1>String Manipulation Library Documentation</h1>
    <h2>Mandatory Functions</h2>
    <h3>Function Name: <code>ft_strlen</code></h3>
    <p>
        <strong>Prototype:</strong> <code>size_t ft_strlen(const char *s);</code>
    </p>
    <p>
        <strong>Parameters:</strong>
        <ul>
            <li><code>s</code>: The string to be measured.</li>
        </ul>
    </p>
    <p>
        <strong>Return:</strong> The length of the string excluding the null terminator.
    </p>
    <p>
        <strong>External Functions:</strong> None
    </p>
    <p>
        <strong>Description:</strong> Computes the length of the string <code>s</code>.
    </p>
    <h3>Function Name: <code>ft_strcpy</code></h3>
    <p>
        <strong>Prototype:</strong> <code>char *ft_strcpy(char *dest, const char *src);</code>
    </p>
    <p>
        <strong>Parameters:</strong>
        <ul>
            <li><code>dest</code>: The destination string.</li>
            <li><code>src</code>: The source string.</li>
        </ul>
    </p>
    <p>
        <strong>Return:</strong> A pointer to the destination string <code>dest</code>.
    </p>
    <p>
        <strong>External Functions:</strong> None
    </p>
    <p>
        <strong>Description:</strong> Copies the string <code>src</code> to <code>dest</code> including the null terminator.
    </p>
    <h3>Function Name: <code>ft_strlcpy</code></h3>
    <p>
        <strong>Prototype:</strong> <code>size_t ft_strlcpy(char *dest, const char *src, size_t size);</code>
    </p>
    <p>
        <strong>Parameters:</strong>
        <ul>
            <li><code>dest</code>: The pointer to the destination.</li>
            <li><code>src</code>: The pointer to the source.</li>
            <li><code>size</code>: The total size of the destination buffer.</li>
        </ul>
    </p>
    <p>
        <strong>Return:</strong> The total length of the string that would be created.
    </p>
    <p>
        <strong>External Functions:</strong> <code>ft_strlen</code>, <code>ft_strlcat</code>
    </p>
    <p>
        <strong>Description:</strong> Concatenates the string <code>src</code> to the end of the string <code>dest</code>. Copies are made up to <code>size - 1</code> characters, and a <code>null</code> terminator is added.
    </p>
    <h3>Function Name: <code>ft_strchr</code></h3>
    <p>
        <strong>Prototype:</strong> <code>char *ft_strchr(const char *s, int c);</code>
    </p>
    <p>
        <strong>Parameters:</strong>
        <ul>
            <li><code>s</code>: The string to be searched.</li>
            <li><code>c</code>: The character to be located.</li>
        </ul>
    </p>
    <p>
        <strong>Return:</strong> A pointer to the first occurrence of character <code>c</code> in the string <code>s</code>, or <code>NULL</code> if the character is not found.
    </p>
    <p>
        <strong>External Functions:</strong> None
    </p>
    <p>
        <strong>Description:</strong> Locates the first character <code>c</code> in the string <code>s</code>.
    </p>
    <h3>Function Name: <code>ft_strrchr</code></h3>
    <p>
        <strong>Prototype:</strong> <code>char *ft_strrchr(const char *s, int c);</code>
    </p>
    <p>
        <strong>Parameters:</strong>
        <ul>
            <li><code>s</code>: The string to be searched.</li>
            <li><code>c</code>: The character to be located.</li>
        </ul>
    </p>
    <p>
        <strong>Return:</strong> A pointer to the last occurrence of character <code>c</code> in the string <code>s</code>, or <code>NULL</code> if the character is not found.
    </p>
    <p>
        <strong>External Functions:</strong> None
    </p>
    <p>
        <strong>Description:</strong> Locates the last occurrence of character <code>c</code> in the string <code>s</code>.
    </p>
    <h3>Function Name: <code>ft_strncmp</code></h3>
    <p>
        <strong>Prototype:</strong> <code>int ft_strncmp(const char *s1, const char *s2, size_t n);</code>
    </p>
    <p>
        <strong>Parameters:</strong>
        <ul>
            <li><code>s1</code>: The first string.</li>
            <li><code>s2</code>: The second string.</li>
            <li><code>n</code>: The maximum number of characters to compare.</li>
        </ul>
    </p>
    <p>
        <strong>Return:</strong> An integer less than, equal to, or greater than zero, depending on the comparison.
    </p>
    <p>
        <strong>External Functions:</strong> None
    </p>
    <p>
        <strong>Description:</strong> Compares the first <code>n</code> letters of two strings <code>s1</code> and <code>s2</code>.
    </p>
    <h3>Function Name: <code>ft_strnstr</code></h3>
    <p>
        <strong>Prototype:</strong> <code>char *ft_strnstr(const char *haystack, const char *needle, size_t len);</code>
    </p>
    <p>
        <strong>Parameters:</strong>
        <ul>
            <li><code>haystack</code>: The string to be searched.</li>
            <li><code>needle</code>: The string to be found.</li>
            <li><code>len</code>: The maximum number of characters to be examined in <code>haystack</code>.</li>
        </ul>
    </p>
    <p>
        <strong>Return:</strong> A pointer to the first occurrence of <code>needle</code> in <code>haystack</code>, or <code>NULL</code> if not found.
    </p>
    <p>
        <strong>External Functions:</strong> None
    </p>
    <p>
        <strong>Description:</strong> Locates the first occurrence of <code>needle</code> within <code>haystack</code>, limiting the search to <code>len</code> characters.
    </p>
    <h3>Function Name: <code>ft_atoi</code></h3>
    <p>
        <strong>Prototype:</strong> <code>int ft_atoi(const char *nptr);</code>
    </p>
    <p>
        <strong>Parameters:</strong>
        <ul>
            <li><code>nptr</code>: The string to be converted.</li>
        </ul>
    </p>
    <p>
        <strong>Return:</strong> The integer represented by the string.
    </p>
    <p>
        <strong>External Functions:</strong> None
    </p>
    <p>
        <strong>Description:</strong> Converts the string <code>nptr</code> to an integer.
    </p>
    <h2>Bonus Functions</h2>
    <h3>Function Name: <code>ft_strdup</code></h3>
    <p>
        <strong>Prototype:</strong> <code>char *ft_strdup(const char *s1);</code>
    </p>
    <p>
        <strong>Parameters:</strong>
        <ul>
            <li><code>s1</code>: The string to be duplicated.</li>
        </ul>
    </p>
    <p>
        <strong>Return:</strong> A pointer to the new duplicated string, or <code>NULL</code> on failure.
    </p>
    <p>
        <strong>External Functions:</strong> <code>malloc</code>, <code>ft_strlen</code>
    </p>
    <p>
        <strong>Description:</strong> Creates a new string that is a duplicate of <code>s1</code>.
    </p>
    <h3>Function Name: <code>ft_strjoin</code></h3>
    <p>
        <strong>Prototype:</strong> <code>char *ft_strjoin(char const *s1, char const *s2);</code>
    </p>
    <p>
        <strong>Parameters:</strong>
        <ul>
            <li><code>s1</code>: The first string to be concatenated.</li>
            <li><code>s2</code>: The second string to be concatenated.</li>
        </ul>
    </p>
    <p>
        <strong>Return:</strong> A pointer to the new concatenated string, or <code>NULL</code> on failure.
    </p>
    <p>
        <strong>External Functions:</strong> <code>malloc</code>, <code>ft_strlen</code>
    </p>
    <p>
        <strong>Description:</strong> Creates a new string that is the concatenation of <code>s1</code> and <code>s2</code>.
    </p>
    <h3>Function Name: <code>ft_strtrim</code></h3>
    <p>
        <strong>Prototype:</strong> <code>char *ft_strtrim(char const *s1, char const *set);</code>
    </p>
    <p>
        <strong>Parameters:</strong>
        <ul>
            <li><code>s1</code>: The string to be trimmed.</li>
            <li><code>set</code>: The string containing the characters to be removed.</li>
        </ul>
    </p>
    <p>
        <strong>Return:</strong> A pointer to the new trimmed string, or <code>NULL</code> on failure.
    </p>
    <p>
        <strong>External Functions:</strong> <code>malloc</code>, <code>ft_strlen</code>
    </p>
    <p>
        <strong>Description:</strong> Creates a new string by removing characters from string <code>s1</code> that are contained in <code>set</code> at both the start and the end.
    </p>
    <h3>Function Name: <code>ft_split</code></h3>
    <p>
        <strong>Prototype:</strong> <code>char **ft_split(char const *s, char c);</code>
    </p>
    <p>
        <strong>Parameters:</strong>
        <ul>
            <li><code>s</code>: The string to be split.</li>
            <li><code>c</code>: The delimiter character.</li>
        </ul>
    </p>
    <p>
        <strong>Return:</strong> A pointer to an array of strings, or <code>NULL</code> on failure.
    </p>
    <p>
        <strong>External Functions:</strong> <code>malloc</code>, <code>ft_strlen</code>
    </p>
    <p>
        <strong>Description:</strong> Splits the string <code>s</code> into substrings using the character <code>c</code> as a delimiter.
    </p>
    <h2>Conclusion</h2>
    <p>This documentation describes the functions implemented in a string manipulation library. Each function has been detailed with its prototype, parameters, return value, and description. The implementation of these functions is essential for efficient string manipulation in C.</p>
</body>
</html>
