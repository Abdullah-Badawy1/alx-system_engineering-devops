0x16. API advanced
==================

Background Context
------------------

Questions involving APIs are common for interviews. Sometimes they're as simple as 'write a Python script that queries a given endpoint', sometimes they require you to use recursive functions and format/sort the results.

A great API to use for some practice is the Reddit API. There's a lot of endpoints available, many that don't require any form of authentication, and there's tons of information to be parsed out and presented. Getting comfortable with API calls now can save you some face during technical interviews and even outside of the job market, you might find personal use cases to make your life a little bit easier.

Resources
---------

**Read or watch**:

-   [Reddit API Documentation](https://alx-intranet.hbtn.io/rltoken/b-4nD6hwEeNYTwYl5yWNwA "Reddit API Documentation")
-   [Query String](https://alx-intranet.hbtn.io/rltoken/luFn_zrgmAQ0OAO_PEI9bA "Query String")

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](https://alx-intranet.hbtn.io/rltoken/uDfkZ_HQ_YnelvPnhnBOnw "explain to anyone"), **without the help of Google**:

### General

-   How to read API documentation to find the endpoints you're looking for
-   How to use an API with pagination
-   How to parse JSON results from an API
-   How to make a recursive API call
-   How to sort a dictionary by value

Requirements
------------

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be interpreted/compiled on Ubuntu 14.04 LTS using `python3` (version 3.4.3)
-   All your files should end with a new line
-   The first line of all your files should be exactly `#!/usr/bin/python3`
-   Libraries imported in your Python files must be organized in alphabetical order
-   A `README.md` file, at the root of the folder of the project, is mandatory
-   Your code should use the `PEP 8` style
-   All your files must be executable
-   The length of your files will be tested using `wc`
-   All your modules should have a documentation (`python3 -c 'print(__import__("my_module").__doc__)'`)
-   You must use the Requests module for sending HTTP requests to the Reddit API

Tasks
-----

### 0\. How many subs?

mandatory

Write a function that queries the [Reddit API](https://alx-intranet.hbtn.io/rltoken/b-4nD6hwEeNYTwYl5yWNwA "Reddit API") and returns the number of subscribers (not active users, total subscribers) for a given subreddit. If an invalid subreddit is given, the function should return 0.

Hint: No authentication is necessary for most features of the Reddit API. If you're getting errors related to Too Many Requests, ensure you're setting a custom User-Agent.

Requirements:

-   Prototype: `def number_of_subscribers(subreddit)`
-   If not a valid subreddit, return 0.
-   NOTE: Invalid subreddits may return a redirect to search results. Ensure that you are not following redirects.

```
wintermancer@lapbox ~/reddit_api/project $ cat 0-main.py
#!/usr/bin/python3
"""
0-main
"""
import sys

if __name__ == '__main__':
    number_of_subscribers = __import__('0-subs').number_of_subscribers
    if len(sys.argv) < 2:
        print("Please pass an argument for the subreddit to search.")
    else:
        print("{:d}".format(number_of_subscribers(sys.argv[1])))
wintermancer@lapbox ~/reddit_api/project $ python3 0-main.py programming
756024
wintermancer@lapbox ~/reddit_api/project $ python3 0-main.py this_is_a_fake_subreddit
0

```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x16-api_advanced`
-   File: `0-subs.py`

 Done? Help Check your code

### 1\. Top Ten

mandatory

Write a function that queries the [Reddit API](https://alx-intranet.hbtn.io/rltoken/b-4nD6hwEeNYTwYl5yWNwA "Reddit API") and prints the titles of the first 10 hot posts listed for a given subreddit.

Requirements:

-   Prototype: `def top_ten(subreddit)`
-   If not a valid subreddit, print None.
-   NOTE: Invalid subreddits may return a redirect to search results. Ensure that you are not following redirects.

