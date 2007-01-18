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

Drupal will often use the email address entered into "Administrator>Site configuration>E-mail address"
as the from address. It is important for this to be the correct address and some ISPs will block email
that comes from an invalid address.

Because this module includes PHPMailer it is rather large and may cause PHP to run out of memory if
its memory limit is small.


This module uses the smtp and mail class's from PHPMailer.
http://phpmailer.sourceforge.net

Please send comments to luke {at} lukelast [.] com