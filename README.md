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
    <h1>Libft Bonus Part</h1>

<h2>Table of Contents</h2>
<ul>
    <li><a href="#introduction">Introduction</a></li>
    <li><a href="#structure-definition">Structure Definition</a></li>
    <li><a href="#functions">Functions</a>
        <ul>
            <li><a href="#ft_lstnew">ft_lstnew</a></li>
            <li><a href="#ft_lstadd_front">ft_lstadd_front</a></li>
            <li><a href="#ft_lstsize">ft_lstsize</a></li>
            <li><a href="#ft_lstlast">ft_lstlast</a></li>
            <li><a href="#ft_lstadd_back">ft_lstadd_back</a></li>
            <li><a href="#ft_lstdelone">ft_lstdelone</a></li>
            <li><a href="#ft_lstclear">ft_lstclear</a></li>
            <li><a href="#ft_lstiter">ft_lstiter</a></li>
            <li><a href="#ft_lstmap">ft_lstmap</a></li>
        </ul>
    </li>
    <li><a href="#makefile">Makefile</a></li>
    <li><a href="#conclusion">Conclusion</a></li>
</ul>

<h2 id="introduction">Introduction</h2>
<p>
    The bonus part of the Libft project focuses on implementing a linked list data structure to improve memory and string manipulation. This additional functionality will enhance the library and provide bonus points if successfully completed after the mandatory part is perfected.
</p>

<h2 id="structure-definition">Structure Definition</h2>
<p>
    Add the following structure definition to your <code>libft.h</code> file:
</p>
<pre><code>
typedef struct s_list
{
    void *content;          // Data contained in the node.
    struct s_list *next;   // Address of the next node or NULL.
} t_list;
</code></pre>

<h2 id="functions">Functions</h2>
<p>The following functions will be implemented to manipulate the linked list:</p>

<h3 id="ft_lstnew">ft_lstnew</h3>
<p>
    <strong>Prototype:</strong> <code>t_list *ft_lstnew(void *content);</code><br>
    <strong>Parameters:</strong> 
    <ul>
        <li><code>content</code>: The content to create the node with.</li>
    </ul>
    <strong>Return Value:</strong> The new node.<br>
    <strong>External Functions:</strong> <code>malloc</code><br>
    <strong>Description:</strong> Allocates and returns a new node, initializing <code>content</code> and setting <code>next</code> to <code>NULL</code>.
</p>

<h3 id="ft_lstadd_front">ft_lstadd_front</h3>
<p>
    <strong>Prototype:</strong> <code>void ft_lstadd_front(t_list **lst, t_list *new);</code><br>
    <strong>Parameters:</strong> 
    <ul>
        <li><code>lst</code>: The address of a pointer to the first link of a list.</li>
        <li><code>new</code>: The address of a pointer to the node to be added to the list.</li>
    </ul>
    <strong>Return Value:</strong> None.<br>
    <strong>Description:</strong> Adds the node <code>new</code> at the beginning of the list.
</p>

<h3 id="ft_lstsize">ft_lstsize</h3>
<p>
    <strong>Prototype:</strong> <code>int ft_lstsize(t_list *lst);</code><br>
    <strong>Parameters:</strong> 
    <ul>
        <li><code>lst</code>: The beginning of the list.</li>
    </ul>
    <strong>Return Value:</strong> The length of the list.<br>
    <strong>Description:</strong> Counts the number of nodes in a list.
</p>

<h3 id="ft_lstlast">ft_lstlast</h3>
<p>
    <strong>Prototype:</strong> <code>t_list *ft_lstlast(t_list *lst);</code><br>
    <strong>Parameters:</strong> 
    <ul>
        <li><code>lst</code>: The beginning of the list.</li>
    </ul>
    <strong>Return Value:</strong> Last node of the list.<br>
    <strong>Description:</strong> Returns the last node of the list.
</p>

<h3 id="ft_lstadd_back">ft_lstadd_back</h3>
<p>
    <strong>Prototype:</strong> <code>void ft_lstadd_back(t_list **lst, t_list *new);</code><br>
    <strong>Parameters:</strong> 
    <ul>
        <li><code>lst</code>: The address of a pointer to the first link of a list.</li>
        <li><code>new</code>: The address of a pointer to the node to be added to the list.</li>
    </ul>
    <strong>Return Value:</strong> None.<br>
    <strong>Description:</strong> Adds the node <code>new</code> at the end of the list.
</p>

<h3 id="ft_lstdelone">ft_lstdelone</h3>
<p>
    <strong>Prototype:</strong> <code>void ft_lstdelone(t_list *lst, void (*del)(void *));</code><br>
    <strong>Parameters:</strong> 
    <ul>
        <li><code>lst</code>: The node to free.</li>
        <li><code>del</code>: The address of the function used to delete the content.</li>
    </ul>
    <strong>Return Value:</strong> None.<br>
    <strong>External Functions:</strong> <code>free</code><br>
    <strong>Description:</strong> Takes as a parameter a node and frees the memory of the node’s content using the function <code>del</code> given as a parameter and frees the node. The memory of <code>next</code> must not be freed.
</p>

<h3 id="ft_lstclear">ft_lstclear</h3>
<p>
    <strong>Prototype:</strong> <code>void ft_lstclear(t_list **lst, void (*del)(void *));</code><br>
    <strong>Parameters:</strong> 
    <ul>
        <li><code>lst</code>: The address of a pointer to a node.</li>
        <li><code>del</code>: The address of the function used to delete the content of the node.</li>
    </ul>
    <strong>Return Value:</strong> None.<br>
    <strong>External Functions:</strong> <code>free</code><br>
    <strong>Description:</strong> Deletes and frees the given node and every successor of that node, using the function <code>del</code> and <code>free(3)</code>. Finally, the pointer to the list must be set to <code>NULL</code>.
</p>

<h3 id="ft_lstiter">ft_lstiter</h3>
<p>
    <strong>Prototype:</strong> <code>void ft_lstiter(t_list *lst, void (*f)(void *));</code><br>
    <strong>Parameters:</strong> 
    <ul>
        <li><code>lst</code>: The address of a pointer to a node.</li>
        <li><code>f</code>: The address of the function used to iterate on the list.</li>
    </ul>
    <strong>Return Value:</strong> None.<br>
    <strong>Description:</strong> Iterates the list <code>lst</code> and applies the function <code>f</code> on the content of each node.
</p>

<h3 id="ft_lstmap">ft_lstmap</h3>
<p>
    <strong>Prototype:</strong> <code>t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));</code><br>
    <strong>Parameters:</strong> 
    <ul>
        <li><code>lst</code>: The address of a pointer to a node.</li>
        <li><code>f</code>: The address of the function used to iterate on the list.</li>
        <li><code>del</code>: The address of the function used to delete the content of a node if needed.</li>
    </ul>
    <strong>Return Value:</strong> The new list. <code>NULL</code> if the allocation fails.<br>
    <strong>External Functions:</strong> <code>malloc</code>, <code>free</code><br>
    <strong>Description:</strong> Iterates the list <code>lst</code> and applies the function <
    <h2>Conclusion</h2>
    <p>This documentation describes the functions implemented in a string manipulation library. Each function has been detailed with its prototype, parameters, return value, and description. The implementation of these functions is essential for efficient string manipulation in C.</p>
</body>
</html>
