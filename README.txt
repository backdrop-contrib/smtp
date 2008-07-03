// $Id$

SMTP Authentication Support module for Drupal 6.x.
This module adds SMTP functionality to Drupal.

REQUIREMENTS
------------
* Access to an SMTP server 
* PHP version 4.0.0 and up.
* The following PHP extensions need to be installed: ereg, hash, date & pcre.
* PHPMailer by Codeworx Tech, which can be found at:
    http://sourceforge.net/project/showfiles.php?group_id=26031
    http://sourceforge.net/projects/phpmailer/
    http://phpmailer.codeworxtech.com/
* Optional: To connect to an SMTP server using SSL, you need to have the
  openssl package installed on your server, and your webserver and PHP
  installation need to have additional components installed and configured.

INSTALL INSTRUCTIONS
--------------------
1.  Copy the smtp.module and smtp.info files into a directory named "smtp" in
    your Drupal sites/all/modules/ directory.  (The other files in the
    package may go there as well, but they are not required for normal
    operation.)
2.  Download PHPMailer (the URL is listed in REQUIREMENTS section above) and
    place it in a directory named "phpmailer" in your
    <drupal-root>/sites/all/modules/smtp directory.
3.  Login as site administrator.
4.  Enable SMTP on the Administer -> Site building -> Modules page.
5.  Fill in required settings on the Administer -> Site configuration -> SMTP
    support page.
6.  Enjoy.

NOTES
-----
This module sends email by connecting to an SMTP server.  Therefore, you need
to have access to an SMTP server for this module to work.

Drupal will often use the email address entered into Administrator -> Site
configuration -> E-mail address as the from address.  It is important for
this to be the correct address and some ISPs will block email that comes from
an invalid address.

Because this module includes PHPMailer it is rather large and may cause PHP
to run out of memory if its memory limit is small.

Connecting to an SMTP server using SSL is possible only if PHP's openssl
extension is working.  If the SMTP module detects openssl is available it
will display the options in the modules settings page.

Sending mail to Gmail requires SSL or TLS.
