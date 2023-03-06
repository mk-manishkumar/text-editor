# Text Editor

This is a simple text editor created using the C programming language. The editor allows users to read existing files, create new files, and update previously saved documents.

## Getting Started

To use the text editor, clone or download the repository to your local machine. You will need a C compiler installed to compile and run the program.

Once you have the source code, navigate to the project directory and run the following command to compile the program:

```

gcc text_editor.c -o text_editor

```

To run the program, enter the following command:

```
./text_editor

```

## Usage

Upon launching the text editor, you will be presented with a simple command-line interface. You first have to type the name of the file with its extension and after that press **Enter Key**.

Then you'll get 3 options:

1. For Reading or opening an existing file, press 'r'
2. For Writing or creating a new file, press 'w'
3. For Adding or updating the existing, press 'a'

To select an option, enter the corresponding letter and press enter.

## Read a File

To read an existing file, press **"r"** and enter the name of the file you wish to read. The contents of the file will be displayed in the console.

## Create a New File
To create a new file, press **"w"** and enter the name of the file you wish to create. You will then be prompted to enter the contents of the file. Once you have entered the desired content, **press Ctrl+D** (for linux and Mac) or **press Ctrl+z** (in Windows) to save the file.

## Update an Existing File

To update an existing file, press **"a"** and enter the name of the file you wish to update. You will then be prompted to enter the new contents of the file. Once you have entered the desired content, **press Ctrl+D** (for linux and Mac) or **press Ctrl+z** (in Windows) to save the file.

## Limitations

This is a simple text editor and as such, it has some limitations. For example, it does not support advanced features like syntax highlighting or text formatting. Additionally, it may not be suitable for editing very large files.

## Acknowledgments
This project was inspired by my desire to learn more about the C programming language and to create a simple yet functional text editor. I would also like to thanks [Khera Shanu](https://twitter.com/kherashanu). Because of his [Giganoto](https://www.giganoto.com/post) Mentorship, I got inspired to create this project.
