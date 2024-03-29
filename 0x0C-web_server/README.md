# 0x0C. Web server

This project will teach you how to automate the configuration of a web server. We are provided a server for this project that we must configure on our own and that we will reuse for other projects at ALX SE.

## Resource

- [Background contenxt](https://www.youtube.com/watch?v=AZg4uJkEa-4)
- [How the web works](https://developer.mozilla.org/en-US/docs/Learn/Getting_started_with_the_web/How_the_Web_works)
- [Nginx](https://en.wikipedia.org/wiki/Nginx)
- [How to Configure Nginx](https://www.digitalocean.com/community/tutorials/how-to-set-up-nginx-server-blocks-virtual-hosts-on-ubuntu-16-04)
- [Root and sub domain](https://landingi.com/help/domains-vs-subdomains/)
- [HTTP requests](https://www.tutorialspoint.com/http/http_methods.htm)
- [HTTP redirection](https://moz.com/learn/seo/redirection)
- [Not found HTTP response code](https://en.wikipedia.org/wiki/HTTP_404)
- [Logs files on Linux](https://www.cyberciti.biz/faq/ubuntu-linux-gnome-system-log-viewer/)
- [RFC 7231 (HTTP/1.1)](https://datatracker.ietf.org/doc/html/rfc7231)
- [RFC 7540 (HTTP/2)](https://datatracker.ietf.org/doc/html/rfc7540)

## Table of contents
Files | Description
----- | -----------
[0-transfer_file](./0-transfer_file) | Bash script that transfers a file from a client to a server
[1-install_nginx_web_server](./1-install_nginx_web_server) | Bash script that installs Nginx on a web server
[2-setup_a_domain_name](./2-setup_a_domain_name) | Domain name gotten from .TECH Domains
[3-redirection](./3-redirection) | Bash script that configures an Nginx server so that /redirect_me is redirecting to another page
[4-not_found_page_404](./4-not_found_page_404) | Bash script that configures a Nginx server to have a custom 404 page that contains the string 'Ceci n'est pas une page'
