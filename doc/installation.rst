.. _installation:

Installation
============

Prerequisites
-------------

To use the privacyIDEA Credential Provider you need to have a privacyIDEA
Authentication System. The installation and setup of this backend is covered
in another documentation [#privacyideaSetup]_.

Ask the company Netknights to get an evaluation version of the privacyIDEA
Credential Provider [#contact]_.

MSI package
-----------

The privacyIDEA Credential Provider comes as a 32bit and 64bit MSI package.
You can install it manually or use your software distribution tool.

Start installation
..................

.. figure:: install_images/install1.png

   :width: 500px

   *Installation of privacyIDEA Credential Provider*

In the first step you can decide, if you want to make the privacyIDEA
Credential Provider the default provider. This means, that no other
credential provider is active on this machine. The user can not login with
only his Windows password anymore.

.. note:: We recommend not activating this setting during installation.
   First you should configure the privacyIDEA Credential Provider and
   check, if it works right. After this, you can change the installation and
   change this configuration.

Configure the privacyIDEA Authentication Server
...............................................

In the next step, you can configure the communitcation to the privacyIDEA
Authentication Server. The credential provider and the server communicate via
 the REST API */validate/check*.

.. note:: You only need to specify the base URL of the authentication server.
   In most cases you only need to enter the URL like *https://yourserver/*.

.. figure:: install_images/install2.png

   :width: 500px

   *Configure the privacyIDEA Credential Provider*

You can also specify another **Login text**, which will be displayed
underneath the provider.

You can specify if the certificate of the privacyIDEA Authentication Server
should be verified.

.. warning:: We recommend to always verify the certificate in productive use.
   Otherwise you will be vulnurable to man-in-the-middle attacks.
   An attacker who intercepts the communication could modify the authentication
   response and thus make the second factor useless.

You may specify the path to a custom login image.

.. note:: The image must be a BMP version 3 file.


After these two steps the privacyIDEA Credential Provider is installed on
your system and can be chosen for login.

.. [#privacyideaSetup] http://privacyidea.readthedocs.io/en/latest/installation/index.html
.. [#contact] https://netknights.it/en/unternehmen/kontakt/

