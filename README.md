# algorithm_cpp
Essential algorithms using c++.

#sublime--cpp--build# -> WINDOWS


{
    "shell_cmd": "g++ -Wl,-stack=268435456 -std=c++17 \"${file}\" -o \"${file_path}/${file_base_name}\" && \"${file_path}/${file_base_name}\" < \"C:\\Sublime_Inout\\input.txt\" > \"C:\\Sublime_Inout\\output.txt\"",
    "file_regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:? (.*)$",
    "working_dir": "${file_path}",
    "selector":  "source.c++",
}


-> LINUX
{
    "shell_cmd": "g++ \"$file\" -o \"$file_base_name\" && ./$file_base_name < input.in > output.in",
    "working_dir": "${file_path}",
    "file_regex": "^(.*):([0-9]+):([0-9]+): (error|warning): (.*)",
    "selector": "source.c++",
    "variants":
    [
        {
            "name": "Run Only",
            "shell_cmd": "./$file_base_name < input.in > output.in"
        }
    ]
}
