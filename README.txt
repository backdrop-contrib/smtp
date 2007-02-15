// $Id$

SMTP MODULE for DRUPAL 5.0
This module adds SMTP functionality to Drupal.

INSTALL INSTRUCTIONS
----
1. Copy smtp.module and smtp.info files to your Drupal modules/ folder.
2. Login as site administrator.
3. Activate smtp.module on the administer->modules page.
4. Fill in required settings on the administer->Site configuration->SMTP support page.
5. Enjoy.

Notes:

This module sends email by connecting to an SMTP server.
Therefore you need to have access to an SMTP server for this module to work.

Drupal will often use the email address entered into "Administrator>Site configuration>E-mail address"
as the from address. It is important for this to be the correct address and some ISPs will block email
that comes from an invalid address.

Because this module includes PHPMailer it is rather large and may cause PHP to run out of memory if
its memory limit is small.

Connecting to an SMTP server using SSL is possible only if PHP's openssl extension is working.
If the SMTP module detects openssl is available it will display the options in the modules settings page.

Sending mail to gmail requires SSL or TLS.

This module uses the smtp and mail class's from PHPMailer.
http://phpmailer.sourceforge.net
