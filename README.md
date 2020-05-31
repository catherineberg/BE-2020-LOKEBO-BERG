On compile ce programme avec l'instruction ./compile_linux.sh suivi de ./arduino

Pour tester le programme on dispose de trois fichier qui simulent des boutons: chargerbutton, exitbutton et infrared.
En supprimant et rajoutant ces fichiers on peut suivre l'évolution du programme: Le rajout du fichier "infrared" simule l'arrivé d'une
voiture devant la porte de garage, et ouvre la porte. ensuite il faut supprime ce fichier pour fermer la porte.
Le bouton "chargerbutton" démarre le chargeur, et on voit l'évolution du niveau de batterie sur l'écran. Une LED verte s'allumera
quand la batterie est pleine.
