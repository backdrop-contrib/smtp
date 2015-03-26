SMTP AUTHENTICATION SUPPORT
===========

CONTENTS OF THIS FILE
---------------------

 - Introduction
 - Requirements
 - Installation
 - Permissions
 - Usage
 - Sponsors

INTRODUCTION
------------

This module adds SMTP functionality to your site.

This module allows Drupal to bypass the PHP mail() function and send email directly to an SMTP server. The module supports SMTP authentication and can even connect to servers using SSL if supported by PHP.

Maintenance sponsored by Chuva Inc.

This module uses the smtp and mail class's from PHPMailer.
https://github.com/PHPMailer/PHPMailer

TESTED
-----

@todo

This module has been installed/uninstalled/installed on Backdrop in a MAMP localhost and does not break the system. Saving options and the logs/pages seem to work. This module requires an active 3rd party SMTP server to see the results of its functionality and has not been tested in that regards yet.


KNOWN ISSUES
---------------------
@todo


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

SMTP can be installed via the standard Backdrop installation process
(http://drupal.org/documentation/install/modules-themes/modules-7).

Fill in required settings on the Administer -> Configuration -> System -> SMTP Authentication Support page.

PERMISSIONS
------------

@todo


USAGE
-----
@todo

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

License
-------

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.

Maintainers
-----------

- seeking

Current Maintainers on Drupal:

Supporting organizations:
Chuva Inc. <http://chuva-inc.com/>

Maintaining this module:

<https://www.drupal.org/node/1188598>

Ported to Backdrop by:

 - biolithic <https://github.com/biolithic>
