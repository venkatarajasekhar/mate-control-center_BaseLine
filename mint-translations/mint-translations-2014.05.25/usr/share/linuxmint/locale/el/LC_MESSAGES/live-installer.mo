��    �      D  �   l      8     9  %   F  %   l  �   �          1  (  B     k     w     �  E   �  
   �     �            6   )  C   `     �  
   �  +   �  �   �     �     �     �  H   �       �   7  �   �  F   \  a   �          
          )     ?     H  "   ^  
   �     �  )   �     �  
   �  2   �  
          
     b   #     �     �     �     �  )   �  �   �     �     �     �     �     �  =     Y   B  x   �          .     D     T     f  
   o     z     �     �  0   �     �  %   �     �       (     �   A  �   �     �     �     �     �     �  F     8   J  O   �  7   �       /   %     U     o     �  &   �      �     �     �               /     >     C     K     [  C   h  :   �  ,   �  '     7   <  7   t  a   �  .        =  
   F     Q  )   V  	   �     �  
   �     �  \   �  $     ^   -     �  (   �      �     �     �            (   *      S     t  �  �  .   !  �   H!  H   �!  /  $"  3   T#  2   �#  E  �#     &  !   !&  #   C&  �   g&  %   �&  =   '  ;   \'     �'  r   �'  �   $(  F   �(     �(  �   )  �  �)     R+     e+     t+  �   �+  J   .,  E  y,  1  �-  �   �.  �   �/     t0  +   �0  -   �0  0   �0     1  :   +1  4   f1     �1     �1  7   �1     2     2  z   32     �2     �2  
   �2    �2     �3  D   �3     44     K4  c   g4  �  �4  J   z6  ,   �6  )   �6  %   7  2   B7  �   u7  �   8  	  �8  %   �9  B   :  )   G:  *   q:     �:     �:     �:     �:  6   �:  v   ;     �;  6   �;  +   �;  $   �;  6   #<  O  Z<  �  �=  %   N?     t?     �?  7   �?  0   �?  �   @  �   �@  �   ?A  �   �A  L   �B  d   �B  :   AC  K   |C  !   �C  H   �C  :   3D  &   nD  1   �D     �D  :   �D  '   E     BE     [E  '   lE     �E  �   �E  x   <F  Q   �F  a   G  f   iG  �   �G  �   QH  I   'I     qI     �I  
   �I  m   �I  #   J     ?J     _J     yJ  �   �J  `   GK  �   �K     �L  z   �L  �   ,M  "   �M  >   �M  .   N  #   >N  d   bN  n   �N     6O     [       R      s   E   <          X   9   )       u   y   I      +   q   ,          �       r   ?   .           �   #   3          b   \   1   }   m           C      Z   g   _       �       e   B   ~   $          d   k      j   :   �                     (   %       t   D   2            {   -       Y               P   c   K      G       '   �   "          A   l   ^   n      !   
   O   N       z                  /          U   ;   J   W   H   >         T   p           &   S           �       6              v   a   =       	   h              0   Q                  w      x   M   7   @   i         |   4          L   5   ]              f   *          V       o   `   F   8        %s Installer <b>Please select a root partition</b> <b>Please select an EFI partition</b> A root partition is needed to install Linux Mint.

 - Mount point: /
 - Recommended size: Larger than 10GB
 - Recommended format: ext4
  Adding user to system Advanced options An EFI system partition is needed with the following requirements:

 - Mount point: /boot/efi
 - Partition flags: Bootable
 - Size: Larger than 100MB
 - Format: vfat or fat32

To ensure compatibility with Windows we recommend you use the first partition of the disk as the EFI system partition.
  Assign to / Assign to /boot/efi Assign to /home Before continuing, please mount your target filesystem(s) at /target. Bootloader Calculating file indexes... Checking bootloader Cleaning APT Click this button to choose a picture for your account Click this button to take a new picture of yourself with the webcam Configuring bootloader Copying %s Could not build supported filesystems list! Create /target/etc/fstab for the filesystems as they will be mounted in your new system, matching those currently mounted at /target (without using the /target prefix in the mount paths themselves). Description Device Device: Do NOT mount virtual devices such as /dev, /proc, /sys, etc on /target/. Do not install bootloader Double-check that your /target/etc/fstab is correct, matches what your new system will have at first boot, and matches what is currently mounted at /target. During the install, you will be given time to chroot into /target and install any pacakges that will be needed to boot your new system. During the install, you will be required to write your own /etc/fstab. ERROR: You must first manually mount your target filesystem(s) at /target to do a custom install! Edit Edit partition Edit partitions Entering new system.. Extended Filesystem operations Format %(partition)s as %(format)s Format as: Format? Formatting %(partition)s as %(format)s... Forward Free space GRUB is a bootloader used to load the Linux kernel Hard drive Hostname Hostname:  If you arent sure what any of this means, please go back and deselect manual partition management. Images Indexing files to be copied.. Install Install GRUB Install Linux Mint on the selected drive: Install any packages that may be needed for first boot (mdadm, cryptsetup, dmraid, etc) by calling "sudo chroot /target" followed by the relevant apt-get/aptitude installations. Install bootloader in %s Installation Paused Installation Tool Installation error Installation finished Installation is Paused: Please finish the custom installation Installation is now complete. Do you want to restart your computer to use the new system? Installation is now paused. Please read the instructions on the page carefully and click Forward to finish installation. Installing Linux Mint... Installing bootloader Keyboard layout Keyboard layout:  Language Language:  Layout Localization Localizing packages Manually mount partitions (ADVANCED USERS ONLY). Model Mount %(partition)s as %(mountpoint)s Mount point Mount point: Mounting %(partition)s on %(mountpoint)s No partition table was found on the hard drive. Do you want the installer to create a set of partitions for you? Note: This will erase any data present on the disk. Note that in order for update-initramfs to work properly in some cases (such as dm-crypt), you may need to have drives currently mounted using the same block device name as they appear in /target/etc/fstab. Operating system Overview Partitioning Passwords do not match Passwords match Please do the following and then click Forward to finish Installation: Please enter your password twice to ensure it is correct Please indicate a filesystem to format the root (/) partition before proceeding Please make sure you wish to manually manage partitions Please provide a hostname Please provide a password for your user account Please provide a username Please provide your full name Real name:  Removing live configuration (packages) Restoring meta-information on %s Select a picture Selected timezone: Setting hostname Setting keyboard options Setting locale Size Summary System settings Take a photo The EFI partition is not bootable. Please edit the partition flags. The EFI partition is too small. It must be at least 100MB. The EFI partition must be formatted as vfat. The installer did not detect any webcam This hostname will be the computers name on the network This is the name you will use to login to your computer This picture represents your user account. It is used in the login screen and a few other places. This will be shown in the About Me application Timezone Timezone:  Type Use this box to test your keyboard layout User info User settings Username:  Variant WARNING: The grub bootloader was not configured properly! You need to configure it manually. Writing filesystem mount information You have selected to manage your partitions manually, this feature is for ADVANCED USERS ONLY. Your full name Your hostname may not contain whitespace Your hostname must be lower case Your password Your passwords do not match Your picture Your username Your username may not contain whitespace Your username must be lower case unallocated Project-Id-Version: linuxmint
Report-Msgid-Bugs-To: FULL NAME <EMAIL@ADDRESS>
POT-Creation-Date: 2014-02-18 21:00+0000
PO-Revision-Date: 2014-05-14 12:36+0000
Last-Translator: James Spentzos <Unknown>
Language-Team: Greek <el@li.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Launchpad-Export-Date: 2014-05-25 11:59+0000
X-Generator: Launchpad (build 17017)
 Πρόγραμμα εγκατάστασης %s <b>Παρακαλώ επιλέξτε την κατατμηση που θα έχει την ρίζα του συστήματος αρχείων</b> <b>Παρακαλώ επιλέξτε ένα διαμέρισμα EFI</b> Χρειάζεται ένα διαμέρισμα δίσκου διαχειριστή για την εγκατάσταση του Linux Mint.

 - Σημείο προσάρτησης: /
 - Συνιστώμενο μέγεθος: Μεγαλύτερο από 10GB
 - Συνιστώμενη μορφή: ext4
  Προσθήκη χρήστη στο σύστημα Επιλογές για προχωρημένους Χρειάζεται ένα διαμέρισμα δίσκου συστήματος EFI με τις ακόλουθες απαιτήσεις:

 - Σημείο προσάρτησης: /boot/efi
 - Ιδιότητα διαμερίσματος: Εκκινήσιμο
 - Μέγεθος: Μεγαλύτερο από 100MB
 - Μορφή: vfat ή fat32

Για να εξασφαλίσετε συμβατότητα με τα Windows, προτείνουμε τη χρήση του πρώτου διαμερίσματος του δίσκου ως διαμέρισμα συστήματος EFI.
  Αντιστοίχιση σε / Εκχώρηση στο /boot/efi Αντιστοίχιση σε /home Πριν συνεχίσετε, παρακαλώ προσαρτήστε  το συστημα αρχείων προορισμού στο  /target. Πρόγραμμα Εκκίνησης Υπολογισμός ευρετηρίων αρχείων... Ελέγχει τον εκκινητη συστηματος Καθαρισμός APT Πατήστε εδώ για να επιλέξετε μια εικόνα για τον λογαριασμό σας Πατήστε αυτό το κουμπί για να πάρετε μια φωτογραφία σας με την συνδεμένη κάμερα Διαμορφωνεται ο  εκκινητης συστηματος Αντιγραφή %s Δεν ήταν δυνατή η δημιουργία καταλόγου υποστηριζόμενων συστημάτων αρχείων! Δημιουργία /target/etc/fstab για τα αρχεία συστήματος ενώ θα τοποθετούνται στο νέο σας σύστημα, που ταιριάζουν με αυτά που είναι αυτή τη στιγμή τοποθετημένα στο /target (χωρίς να χρησιμοποιείται το πρόθημα /target στις ίδιες τις διαδρομές τοποθέτησης). Περιγραφή Συσκευή Συσκευή: ΔΕΝ θα πρέπει να προσαρτήσετε εικονικά συστήματα αρχείων όπως τα  /dev, /proc, /sys, etc μέσα στο /target/. Να μην εγκατασταθεί πρόγραμμα εκκίνησης Σιγουρευτείτε ότι το /target/etc/fstab σας είναι σωστό, ότι ταιριάζει με αυτό που θα έχει το νέο σας σύστημα στην πρώτη εκκίνηση και με αυτό που είναι προσαρτημένο αυτή τη στιγμή στο /target. Κατά την διάρκεια της εγκατάστασης, θα υπάρξει ευκαιρία να κάνετε chroot πάνω στο /target και να εγκαταστήσετε πακέτα λογισμικού απαραίτητα για την εκκίνηση του υπολογιστή. Κατά την εγκατάσταση ΑΠΑΙΤΕΙΤΑΙ να γράψετε μόνος σας το δικό σας αρχείο /etc/fstab. Σφάλμα: Θα πρέπει να προσαρτηθεί (mount) το διαμέρισμα που θα γίνει εγκατάσταση στη θέση  /target πριν γίνει μια προσαρμοσμένη εγκατάσταση! Επεξεργασία Επεξεργασία κατάτμησης Επεξεργασία κατατμήσεων Εισαγωγή στο νέο σύστημα... Εκτεταμένο Λειτουργίες συστήματος αρχείων Μορφοποίηση %(partition)s ως %(format)s Μορφοποίησε ως: Διαμόρφωση; Μορφοποίηση %(partition)s ως %(format)s... Επόμενο Ελεύθερος χώρος Το GRUB είναι ένα πρόγραμμα εκκίνησης που φορτώνει τον πυρήνα του Linux Σκληρός δίσκος Hostname Hostname:  Αν δεν έχετε ιδέα τις ακριβώς σημαίνει αυτό, παρακαλώ πηγαίνετε πίσω και αποεπιλέξτε την χειροκίνητη διαχείριση των κατατμήσεων του δίσκου. Εικόνες Ευρετηρίαση αρχείων προς αντιγραφή... Εγκατάσταση Εγκατάσταση GRUB Εγκατάσταση του Linux Mint στην επιλεγμένη συσκευή δίσκου: Εγκαταστήστε όλα τα πακέτα που απαιτούνται για την πρώτη εκκίνηση του υπολογιστή. Ενδεικτικά  mdadm, cryptsetup, dmraid, ... Για να το κάνετε αυτό πρώτα δώστε την εντολή "sudo chroot /target" και στην συνέχεια τις σχετικές εντολές για την εγκατάση apt-get installl ... Εγκατάσταση προγράμματος εκκίνησης σε %s Η εγκατάσταση διακόπηκε Εργαλείο Εγκατάστασης Σφάλμα εγκατάστασης Η εγκατάσταση ολοκληρώθηκε Η εγκατάσταση έχει διακοπεί: Παρακαλώ ολοκληρώστε την προσαρμοσμένη εγκατάσταση Η εγκατάσταση ολοκληρώθηκε. Θέλετε να κάνω επανεκκίνηση του υπολογιστή για να αρχίσετε να το χρησιμοποιείτε; Η εγκατάσταση έχει τώρα διακοπεί. Παρακαλώ διαβάστε προσεκτικά τις οδηγίες στη σελίδα και πατήστε Προώθηση για να ολοκληρώσετε την εγκατάσταση. Εγκαθιστώ το Linux Mint... Εγκατάσταση προγράμματος εκκίνησης Διάταξη πληκτρολογίου Διάταξη πληκτρολογίου  Γλώσσα Γλώσσα:  Διάταξη Εντοπιότητα Πακέτα γλωσσικής υποστήριξης Διαχείρηση κατατμήσεων δίσκου με το χέρι (ΓΙΑ ΕΜΠΕΙΡΟΥΣ ΧΡΗΣΤΕΣ) Μοντέλο Προσάρτηση %(partition)s ως %(mountpoint)s Σημείο φόρτωσης (mount point) Σημείο προσάρτησης: Προσάρτηση %(partition)s σε %(mountpoint)s Δεν εντοπίστηκε πίνακας κατατμήσεων στο σκληρό δίσκο. Θέλετε ο εγκαταστάτης να δημιουργήσει καινούριες κατατμήσεις; Σημείωση: Αυτό θα διαγράψει όλα τα υπάρχοντα δεδομένα του δίσκου. Σημειώστε ότι για να λειτουργήσει κανονικά το update-initramfs σε μερικές περιπτώσεις (όπως το dm-crypt), ίσως χρειαστεί να έχετε προσαρτήσει οδηγούς που να χρησιμοποιούν το ίδιο όνομα συσκευής με αυτό με το οποίο εμφανίζονται στο /target/etc/fstab. Λειτουργικό σύστημα Επισκόπηση Κατάτμηση δίσκου Τα συνθηματικά δεν ταιριάζουν Τα συνθηματικά ταιριάζουν Παρακαλώ κάντε τα παρακάτω και μετά πατήστε επόμενο για να ολοκληρωθεί η εγκατάσταση. Παρακαλώ εισάγετε το συνθηματικό σας δύο φορές για επιβεβαίωση της ορθότητας Παρακαλώ επιλέξτε σύστημα αρχείων για μορφοποίηση του root (/) πριν συνεχίσετε Παρακαλώ βεβαιωθείτε ότι πραγματικά επιθυμείτε να διαχειριστείτε τις κατατμήσεις του δίσκου χειροκίνητα Παρακαλώ συμπληρώστε το όνομα υπολογιστή Παρακαλώ δώστε ένα συνθηματικό για το όνομα χρήστη σας Παρακαλω δώστε ένα όνομα χρήστη Παρακαλώ συμπληρώστε το πλήρες σας όνομα Πραγματικό Όνομα:  Αφαίρεση προσωρινών ρυθμίσεων(πακέτων) Επαναφορά μετα-πληροφοριών σε %s Επιλογή μιας εικόνας Επιλογή ωρολογιακής ζώνης: Ορισμός hostname Ρύθμιση επιλογών πληκτρολογίου Ρύθμιση εντοπιότητας Χωρητικότητα Περίληψη Ρυθμίσεις συστήματος Λήψη φωτογραφίας Η κατάτμηση EFI δεν είναι εκκινήσημη. Διορθώστε τις σημαίες της κατάτμησης. Το διαμέρισμα EFI είναι τόσο μικρό. Πρέπει να είναι τουλάχιστον 100MB. Το διαμέρισμα EFI πρέπει να διαμορφωθεί ως vfat. Δεν βρήκα καμία κάμερα συνδεμένη στον υπολογιστή σας Αυτό το hostname θα είναι το όνομα του υπολογιστή στο δίκτυο Αυτό το όνομα θα χρησιμοποιείτε για να συνδεθείτε στον υπολογιστή σας Αυτή η εικόνα αναπαριστά τον λογαριασμό χρήστη σας. Χρησιμοποιείτε στην οθόνη σύνδεση, καθώς και σε μερικά άλλα μέρη Αυτό θα εμφανίζεται στην εφαρμογή "About Me" Ωρολογιακή ζώνη Ώρα Ζώνης  Τύπος Δοκιμάστε τη διάταξη του πληκτρολογίου σας σε αυτό το κουτί Πληροφορίες χρήστη Ρυθμίσεις χρήστη Όνομα Χρήστη:  Παραλλαγή ΠΡΟΕΙΔΟΠΟΙΗΣΗ: Ο εκκινητης συτηματος δεν διαμορφωθηκε κανονικα!Πρεπει να τον διαμορφωσεις μονος σου. Εγγραφή πληροφοριών προσάρτησης συστήματος αρχείων Επιλέξατε να διαχειριστείτε τις κατατμήσεις των δίσκων με το χέρι. ΑΥΤΗ Η ΛΕΙΤΟΥΡΓΙΑ ΕΙΝΑΙ ΓΙΑ ΑΤΟΜΑ ΠΟΥ ΞΕΡΟΥΝ ΤΙ ΑΚΡΙΒΩΣ ΚΑΝΟΥΝ Ονοματεπώνυμο Το όνομα του υπολογιστή σας δεν μπορεί να περιέχει κενά διαστήματα Το όνομα του υπολογιστή σας πρέπει να περιέχει μόνο πεζούς χαρακτήρες Το συνθηματικό σας Τα συνθηματικά σας δεν ταιριάζουν Η εικόνα ή φωτογραφία σας Το όνομα χρήστη σας Το όνομα χρήστη δεν μπορεί να περιέχει κενά διαστήματα Το όνομα χρήστη πρέπει να αποτελείται από πεζούς χαρακτήρες αδέσμευτο 