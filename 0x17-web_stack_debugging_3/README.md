0x17. Web stack debugging #3
============================


Concepts
--------

*For this project, students are expected to look at these concepts:*

-   [Web Server](https://alx-intranet.hbtn.io/concepts/17)
-   [Web stack debugging](https://alx-intranet.hbtn.io/concepts/68)

Background Context
------------------

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-sysadmin_devops/293/d42WuBh.png)

When debugging, sometimes logs are not enough. Either because the software is breaking in a way that was not expected and the error is not being logged, or because logs are not providing enough information. In this case, you will need to go down the stack, the good news is that this is something Holberton students can do :)

Wordpress is a very popular tool, it allows you to run blogs, portfolios, e-commerce and company websites... It [actually powers 26% of the web](https://alx-intranet.hbtn.io/rltoken/qxyFYZIwOXQWw02-HaQ7Bw "actually powers 26% of the web"), so there is a fair chance that you will end up working with it at some point in your career.

Wordpress is usually run on LAMP (Linux, Apache, MySQL, and PHP), which is a very widely used set of tools.

The web stack you are debugging today is a Wordpress website running on a LAMP stack.

Requirements
------------

### General

-   All your files will be interpreted on Ubuntu 14.04 LTS
-   All your files should end with a new line
-   A `README.md` file at the root of the folder of the project is mandatory
-   Your Puppet manifests must pass `puppet-lint` version 2.1.1 without any errors
-   Your Puppet manifests must run without error
-   Your Puppet manifests first line must be a comment explaining what the Puppet manifest is about
-   Your Puppet manifests files must end with the extension `.pp`
-   Files will be checked with Puppet v3.4

More Info
---------

### Install `puppet-lint`

```
$ apt-get install -y ruby
$ gem install puppet-lint -v 2.1.1

```

Tasks
-----

### 0\. Strace is your friend

mandatory

[![](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2019/6/f5af5167e65bd3101f76.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220427%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220427T010504Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=268749714454cbf9cb702845b19b5319279abc4303dbd1762458d06795213fd8)](https://youtu.be/uHEzt1QuASo)[](http://savefrom.net/?url=https%3A%2F%2Fyoutu.be%2FuHEzt1QuASo&utm_source=userjs-chrome&utm_medium=extensions&utm_campaign=link_modifier "Obtenir un lien direct")

Using `strace`, find out why Apache is returning a 500 error. Once you find the issue, fix it and then automate it using Puppet (instead of using Bash as you were previously doing).

Hint:

-   `strace` can attach to a current running process
-   You can use [tmux](https://alx-intranet.hbtn.io/rltoken/UsSRoxIYdq0l0QUIuDNnSw "tmux") to run [strace](https://alx-intranet.hbtn.io/rltoken/ueMevAif95DjyW2sqVCMoA "strace") in one window and `curl` in another one

Requirements:

-   Your `0-strace_is_your_friend.pp` file must contain Puppet code
-   You can use whatever Puppet resource type you want for you fix

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x17-web_stack_debugging_3`
-   File: `0-strace_is_your_friend.pp`
