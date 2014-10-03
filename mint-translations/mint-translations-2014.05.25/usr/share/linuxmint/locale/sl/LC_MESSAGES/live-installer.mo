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
   �     �  \   �  $     ^   -     �  (   �      �     �     �            (   *      S     t  �  �     !  !   6!     X!  �   u!     "     /"  )  B"  
   l#     w#     �#  H   �#     �#  %   �#  "   $     ?$  /   O$  ?   $  #   �$     �$  ;   �$  �   ,%     �%     �%     �%  L   �%  !   G&  �   i&  �   '  8   �'  |   �'     p(     v(     �(     �(     �(     �(  '   �(     )     )  -   .)     \)     c)  4   u)  	   �)     �)     �)  k   �)     @*  ,   F*     s*     {*  #   �*  �   �*      c+     �+     �+     �+     �+  7   �+  a   ,  s   {,     �,  #   -     0-     B-     V-     \-     d-     q-     �-  4   �-     �-  )   �-     
.     .  -   -.  �   [.  �   �.     �/     �/     �/     �/     0  A   0  <   a0  V   �0  9   �0     /1  '   F1     n1     �1     �1  *   �1     �1     �1     2     2     52     U2     q2     z2     �2     �2  5   �2  9   �2  (   3  +   D3  !   p3  ;   �3  k   �3  !   :4     \4     i4     x4  6   ~4     �4     �4     �4  
   �4  `    5  <   a5  ]   �5     �5  *   6  2   76     j6     v6     �6     �6  ,   �6  4   �6     7     [       R      s   E   <          X   9   )       u   y   I      +   q   ,          �       r   ?   .           �   #   3          b   \   1   }   m           C      Z   g   _       �       e   B   ~   $          d   k      j   :   �                     (   %       t   D   2            {   -       Y               P   c   K      G       '   �   "          A   l   ^   n      !   
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
PO-Revision-Date: 2014-02-10 10:38+0000
Last-Translator: Damir Jerovšek <Unknown>
Language-Team: Slovenian <sl@li.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Launchpad-Export-Date: 2014-05-25 11:59+0000
X-Generator: Launchpad (build 17017)
 Namestitveni program %s <b>Izberite korenski razdelek</b> <b>Izberite razdelek EFI</b> Za namestitev Linux Minta je zahtevan korenski razdelek.

 - Točka priklopa: /
 - Priporočljiva velikost: večja od 10GB
 - Priporočljiva oblika: ext4
  Dodajanje uporabnika v sistem Napredne možnosti Sistemski razdelek EFI je potreben z naslednjimi zahtevami:

 - točka priklopa: /boot/efi
 - zastavice razdelka: zagonljiv
 - velikost: večje od 100MB
 - oblika: vfat ali fat32

Za zagotovitev združljivosti z Windows se priporoča, da uporabite prvi razdelek diska kot sistemski razdelek EFI.
  Dodeli k / Dodeli k /boot/efi Dodeli k /home Pred nadaljevanjem priklopite vaš ciljni datotečni sistem(e) na /cilj. Zagonski nalagalnik Preračunavanje datotečnih kazal ... Preverjanje zagonskega nalagalnika Čiščenje APT Kliknite ta gumb za izbiro slike za vaš račun Kliknite ta gumb za ustvaritev nove slike Vas s spletno kamero. Nastavljanje zagonskega nalagalnika Kopiranje %s Ni mogoče izgraditi seznama podprtih datotečnih sistemov! Ustvarite /cilj/etc/fstab za datotečne sisteme, ker bodo priklopljeni v vaš nov sistem, ki se ujemajo s trenutno priklopljeni na /cilj (brez uporabe predpone v samih poteh priklopa) Opis Naprava Naprava: NE priklapljajte navideznih naprav, kot je /dev, /proc, /sys itd. na /cilj/. Ne namesti zagonskega nalagalnika Dvakrat preverite, da je vaš /cilj/etc/fstab pravilen, da se ujema s tem, kar bo vaš nov sistem imel pri prvem zagonu in da se ujema s tem, kar je trenutno priklopljeno na /cilj. Med nameščanjem vam bo dodeljen čas za izvedbo opravila chroot v /cilj ter namestite vsakršne pakete, ki bodo potrebni za zagon vašega novega sistema. Med nameščanjem boste morali zapisati svoj /etc/fstab. NAPAKA: če želite opraviti namestitev po meri, morate najprej ročno priklopiti vaš ciljni datotečni sistem(e) na /cilj! Uredi Uredi razdelek Urejanje razdelkov Vstopanje v nov sistem ... Razširjeno Opravila datotečnega sistema Formatiraj %(partition)s kot %(format)s Formatiraj kot: Ali želite formatirati? Formatiranje %(partition)s kot %(format)s ... Naprej Nezaseden prostor GRUB je zagonski nalagalnik za nalaganje jedra Linux Trdi disk Ime gostitelja Ime gostitelja:  Če ne razumete, kaj te stvari pomenijo, pojdite nazaj in odstranite izbiro ročnega upravljanja razdelkov. Slike Beleženje datotek, namenjenih kopiranju ... Namesti Namesti GRUB Namesti Linux Mint na izbran pogon: Namestite vsakršne pakete, ki so morebiti potrebni za prvi zagon (mdadm, cryptsetup, dmraid, itd.) s klicem "sudo chroot /cilj", čemur sledijo ustrezne namestitve apt-get/aptitude. Namesti zagonski nalagalnik v %s Nameščanje je v premoru Namestitveno orodje Napaka med namestitvijo Namestitev je končana Nameščanje je v premoru: končajte namestitev po meri Nameščanje je zdaj končano. Ali želite ponovno zagnati računalnik za uporabo novega sistema? Nameščanje je zdaj v premoru. Pazljivo preberite navodila na strani in kliknite Naprej za dokončanje namestitve. Nameščanje Linux Minta ... Nameščanje zagonskega nalagalnika Razporeditev tipk Razporeditev tipk:  Jezik Jezik:  Razporeditev Krajevna prilagoditev Krajevno prilagajanje paketov Ročno priklopi razdelke (SAMO NAPREDNI UPORABNIKI). Model Priklopi %(partition)s kot %(mountpoint)s Priklopna točka Priklopna točka: Priklapljanje %(partition)s na %(mountpoint)s Na trdem disku ni tabele razdelkov. Ali želite, da namestitveni program ustvari nabor razdelkov? Pozor: s tem bodo izbrisani vsi podatki z diska. Upoštevajte, da boste za pravilno delovanje update-initramfs v nekaterih primerih (kot je dm-crypt) morali imeti pogone trenutno priklopljene z uporabo enakega imena bločne naprave, kot se pojavijo v /cilj/etc/fstab. Operacijski sistem Pregled Ustvarjanje razdelkov Gesli se ne ujemata Gesli se ujemata Opravite naslednje ter kliknite Naprej za dokončanje namestitve: Svoje geslo vnesite dvakrat, da potrdite njegovo pravilnost. Pred nadaljevanjem določite datotečni sistem za formatiranje korenskega razdelka (/) Prepričajte se, če želite ročno upravljati z razdelki Vnesite ime gostitelja Podajte geslo za svoje uporabniško ime Podajte uporabniško ime Vnesite svoje polno ime Pravo ime:  Odstranjevanje "žive" nastavitve (paketi) Obnavljanje metapodatkov na %s Izberite sliko Izbran časovni pas: Določanje imena gostitelja Določanje možnosti tipkovnice Določanje jezikovnih oznak Velikost Povzetek Sistemske nastavitve Zajemi fotografijo Razdelek EFI ni zagonski. Uredite zastavice razdelka. Razdelek EFI je premajhen. Velik mora biti najmanj 100MB. Razdelek EFI mora biti zapisan kot vfat. Namestilnik ni zaznal nobene spletne kamere To bo ime računalnika v omrežju To je ime, ki ga boste uporabljali za prijavo v računalnik Ta slika predstavlja vaš uporabniški račun. Uporablja se v prijavnem zaslonu in nekaterih drugih mestih. To bo prikazano v programu O meni Časovni pas Časovni pas:  Vrsta Uporabite to polje za preizkus svoje razporeditve tipk Podatki o uporabniku Uporabniške nastavitve Uporabniško ime:  Različica OPOZORILO: zagonski nalagalnik grub ni bil pravilno nastavljen! Potrebno ga je nastaviti ročno. Zapisovanje podatkov o priklopni točki datotečnega sistema Izbrali ste ročno upravljanje vaših razdelkov. Ta zmožnost je SAMO ZA NAPREDNE UPORABNIKE. Vaše polno ime Ime gostitelja ne sme vsebovati presledkov Ime gostitelja mora biti zapisano z malimi črkami Vaše geslo Vaši gesli se ne ujemata Vaša slika Vaše uporabniško ime Uporabniško ime ne sme vsebovati presledkov Uporabniško ime mora biti sestavljeno iz malih črk nedodeljeno 