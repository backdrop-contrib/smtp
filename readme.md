SMTP AUTHENTICATION SUPPORT
===================

CONTENTS OF THIS FILE
---------------------

 - Introduction
 - Tested
 - Known Issues
 - Special Thanks
 - Requirements
 - Installation
 - Coming From Drupal?
 - Usage
 - License
 - Credits
 - Maintainers

INTRODUCTION
------------

This module adds SMTP functionality to your site.

This module allows Drupal to bypass the PHP mail() function and send email directly to an SMTP server. The module supports SMTP authentication and can even connect to servers using SSL if supported by PHP.

TESTED
-----

<<<<<<< HEAD
Email Modules
The following modules ported to Backdrop are inter-related to the mailing system:

simplenews

simplenews_scheduler

mimemail

mandrill

mailsystem

smtp

They have been converted from Drupal to Backdrop but are still not working.  They need debugging into what was changed between the systems and how to fix it. I, biolithic the one who did the intial conversion, lack the heart or time in the spring of 2015 to debug them currently.

Do you have a need or desire for email newsletters?  You are welcome to submit pull requests to finish these modules.  It may not be a lot of work.  Thanks!
=======
@todo

This module has been installed/uninstalled/installed on Backdrop in a MAMP localhost and does not break the system. Saving options and the logs/pages seem to work. This module requires an active 3rd party SMTP server to see the results of its functionality and has not been tested in that regards yet.

>>>>>>> 336c344942998019130ecb1c9fbdb9cbef1bbf27

KNOWN ISSUES
---------------------

This module uses the smtp and mail class's from PHPMailer.
https://github.com/PHPMailer/PHPMailer

SPECIAL THANKS
--------------

Maintenance sponsored by Chuva Inc. <http://chuva-inc.com/>

REQUIREMENTS
------------

This branch requires the Mail System module.
* Access to an SMTP server
* The following PHP extensions need to be installed: ereg, hash, date & pcre.

* Optional: To connect to an SMTP server using SSL, you need to have the
  openssl package installed on your server, and your webserver and PHP
  installation need to have additional components installed and configured.

INSTALLATION
------------

Install this module using the official Backdrop CMS instructions at https://backdropcms.org/guide/modules


COMING FROM DRUPAL?
-------------------

Nothing substantially different.

PERMISSIONS
------------

@todo


USAGE
-----

<https://www.drupal.org/node/1188598>

This module sends email by connecting to an SMTP server.  Therefore, you need
to have access to an SMTP server for this module to work.

Backdrop will often use the email address entered into Administrator ->
Configuration -> Site information -> E-mail address as the from address.  It is
important for this to be the correct address and some ISPs will block email that
comes from an invalid address.

This module no longer uses the PHPMailer package as an external library, instead
a slimmed down version of the library have been relicensed and integrated with the
smtp module.

Connecting to an SMTP server using SSL is possible only if PHP's openssl
extension is working.  If the SMTP module detects openssl is available it
will display the options in the modules settings page.

Sending mail to Gmail requires SSL or TLS.

LICENSE
-------

This project is GPL v2 software. See the LICENSE.txt file in this directory for complete text.

CREDITS
-----------

This module is based on the SMTP module for Drupal, originally written and maintained by a large number of contributors, including:

- José San Martin <https://www.drupal.org/u/jos%C3%A9-san-martin>

- wundo <https://www.drupal.org/u/wundo>

MAINTAINERS
-----------

- seeking

Ported to Backdrop by:

 - biolithic <https://github.com/biolithic>
