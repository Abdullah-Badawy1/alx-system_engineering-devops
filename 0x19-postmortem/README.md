<<<<<<< HEAD
0x19. Postmortem
================

-   By Sylvain Kalache
-   Weight: 1

Concepts
--------

*For this project, students are expected to look at this concept:*

-   [On-call](https://alx-intranet.hbtn.io/concepts/39)

Background Context
------------------

[![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-sysadmin_devops/294/tWUPWmR.png)](https://youtu.be/rp5cVMNmbro)[](http://savefrom.net/?url=https%3A%2F%2Fyoutu.be%2Frp5cVMNmbro&utm_source=userjs-chrome&utm_medium=extensions&utm_campaign=link_modifier "Obtenir un lien direct")

Any software system will eventually fail, and that failure can come stem from a wide range of possible factors: bugs, traffic spikes, security issues, hardware failures, natural disasters, human error... Failing is normal and failing is actually a great opportunity to learn and improve. Any great Software Engineer must learn from his/her mistakes to make sure that they won't happen again. Failing is fine, but failing twice because of the same issue is not.

A postmortem is a tool widely used in the tech industry. After any outage, the team(s) in charge of the system will write a summary that has 2 main goals:

-   To provide the rest of the company's employees easy access to information detailing the cause of the outage. Often outages can have a huge impact on a company, so managers and executives have to understand what happened and how it will impact their work.
-   And to ensure that the root cause(s) of the outage has been discovered and that measures are taken to make sure it will be fixed.

Resources
---------

**Read or watch**:

-   [Incident Report, also referred to as a Postmortem](https://alx-intranet.hbtn.io/rltoken/vkEjk-M6yBWW-wyB-7-I9Q "Incident Report, also referred to as a Postmortem")
-   [How to run a Postmortem](https://alx-intranet.hbtn.io/rltoken/pzE_VO7Bfe49K_MhkOyzdQ "How to run a Postmortem")

More Info
---------

### Manual QA Review

**It is your responsibility to request a review for your postmortem from a peer before the project's deadline. If no peers have been reviewed, you should request a review from a TA or staff member.**

Tasks
-----

### 0\. My first postmortem

mandatory

[![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-sysadmin_devops/294/pQ9YzVY.gif)](https://twitter.com/devopsreact/status/834887829486399488)

Using one of the web stack debugging project issue or an outage you have personally face, write a postmortem. Most of you will never have faced an outage, so just get creative and invent your own :)

Requirements:

-   Issue Summary (that is often what executives will read) must contain:
    -   duration of the outage with start and end times (including timezone)
    -   what was the impact (what service was down/slow? What were user experiencing? How many % of the users were affected?)
    -   what was the root cause
-   Timeline (format bullet point, format: `time` - `keep it short, 1 or 2 sentences`) must contain:

    -   when was the issue detected
    -   how was the issue detected (monitoring alert, an engineer noticed something, a customer complained...)
    -   actions taken (what parts of the system were investigated, what were the assumption on the root cause of the issue)
    -   misleading investigation/debugging paths that were taken
    -   which team/individuals was the incident escalated to
    -   how the incident was resolved
-   Root cause and resolution must contain:

    -   explain in detail what was causing the issue
    -   explain in detail how the issue was fixed
-   Corrective and preventative measures must contain:

    -   what are the things that can be improved/fixed (broadly speaking)
    -   a list of tasks to address the issue (be very specific, like a TODO, example: patch Nginx server, add monitoring on server memory...)
-   Be brief and straight to the point, between 400 to 600 words

While postmortem format can vary, stick to this one so that you can get properly reviewed by your peers.

Please, remember that these blogs must be written in English to further your technical ability in a variety of settings.

#### Add URLs here:

Save

1.  <https://docs.google.com/document/d/1cc0O4o23eA4JnANrhi_cxkJIuysUhEKhO4Bc9Oaoua8/edit?usp=sharing> Remove

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x19-postmortem`
-   File: `README.md`

 Done! Help

### 1\. Make people want to read your postmortem

#advanced

We are constantly stormed by a quantity of information, it's tough to get people to read you.

Make your post-mortem attractive by adding humour, a pretty diagram or anything that would catch your audience attention.

Please, remember that these blogs must be written in English to further your technical ability in a variety of settings.

#### Add URLs here:

Save

1.  <https://docs.google.com/document/d/1cc0O4o23eA4JnANrhi_cxkJIuysUhEKhO4Bc9Oaoua8/edit?usp=sharing> Remove

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x19-postmortem`
-   File: `README.md`
=======
# Incident Report: Outage of XYZ Online Payment System

## Incident Details
- **Incident ID:** IR20240413
- **Date/Time of Incident:** April 13, 2024, 09:32 AM - 10:47 AM UTC
- **Report Prepared by:** Jane Doe, Incident Manager
- **Reviewed by:** John Smith, CTO

## Introduction
On April 13, 2024, at approximately 09:32 AM UTC, the XYZ Online Payment System experienced a complete service outage. The issue was detected by our automated monitoring systems and confirmed by customer reports of inability to process payments.

## Summary of the Incident
The outage was caused by a failure in the database update process, which led to a cascade of timeouts in the payment processing service. This incident affected approximately 12,000 transactions, potentially impacting customer trust and resulting in an estimated $200,000 in lost revenue.

## Timeline
- **09:32 AM UTC** - Outage detected by monitoring systems.
- **09:35 AM UTC** - Incident response team alerted.
- **09:40 AM UTC** - Initial investigation identified database issues.
- **09:50 AM UTC** - Rollback of database update initiated.
- **10:20 AM UTC** - System functionality partially restored.
- **10:47 AM UTC** - Full system restoration confirmed, monitoring continued.

## Impact Analysis
Direct Impact: Failure of the payment processing system, affecting approximately 12,000 transactions.
Indirect Impact: Customer dissatisfaction, potential brand damage, estimated financial loss of approximately $200,000.
Data Loss: No data was lost, but data processing was delayed during the outage period.

## Root Cause Analysis
The root cause was a flawed database migration script that locked critical tables, causing transaction timeouts. The script did not account for high load conditions during peak operational hours.

## Action Items and Remediations
1. **Database Migration Review Process**
   - **Action:** Implement a peer review process for all database changes.
   - **Responsible:** Database Engineering Team
   - **Deadline:** May 1, 2024
2. **Enhanced Monitoring for Database Operations**
   - **Action:** Deploy additional monitoring tools to track database performance during migrations.
   - **Responsible:** IT Operations Team
   - **Deadline:** May 15, 2024
3. **Customer Communication Strategy**
   - **Action:** Develop a proactive customer communication plan for any future outages.
   - **Responsible:** Customer Service Manager
   - **Deadline:** May 10, 2024

## Lessons Learned
Technical: The need for rigorous testing of database changes under load conditions was highlighted.
Process: The incident underscored the importance of having a robust rollback strategy for database migrations.
Positive: The effective response of the Incident Management team in quickly identifying and mitigating the impact of the outage was crucial in the rapid recovery.

## Flowchart Diagram
![Simple Flowchart of the Incident](diagram.png)
![Simple Flowchart of the Incident](diagram2.png)

## Appendices and Supporting Information
- **Appendix A:** Database migration script review.
- **Appendix B:** Graphs showing system performance during the incident.
- **Appendix C:** Customer service reports and feedback during the outage.
>>>>>>> 4ae6e3f7f892d2206c8e734e90394e3516606cb0
