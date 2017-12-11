---
title : Technologies de Cloud Computing
sub-title : M-TSI
author : Cédric Esnault
date : 12/12/2017 - IGN/ENSG
---


# Cloud Computing #

## Plan de la présentation ##{.planPrez}

- Concepts 

- Technologies

- Enjeux 


<aside class="notes">
   
</aside>


# Concepts #


## Les Origines ##

- Hérité de l'informatique client-serveur sur des **MainFrame** (L'accès distant était alors représenté par un nuage)
- Vers 2000, les hébergeurs proposent des applications pré-installées dans leur datacenters (Email, CRM ...)
- Apparition du terme "Cloud" vers 2006 via les services Amazon

`Amazon a eu l'idée de mettre à la disposition du public son énorme infrastructure mondiale, dimensionnée pour les pics (Noël...) et sous-utilisée le reste du temps`{.note .fragment}

<aside class="notes">
   
</aside>


## Un besoin d'industrialisation ##

Les entreprises souhaitent en finir avec les pannes informatiques.

- Industrialiser les processus du SI, limiter l'intervention humaine, automatiser
- Ceci nécessite des infrastructures importantes pour que l'investissement en vaille la peine
- Cela libère des ressources IT pour faire du *Business* plutôt que réparer le SI


<aside class="notes">
   
</aside>


## Un besoin de rationalisation ##

Les entreprises ont besoin de baisser les coûts et d'utiliser au maximum l'investissement du très cher matériel informatique.

- Les solutions sont multiples
    - Urbanisation du SI
        - POS
        - modularité
        - subsidiarité
        - limiter les adhérences
    - Élasticité / Scalabilité
        - absorber les pics de charges
        - repartir les ressources physiques

<aside class="notes">
   POS : Plan d'occupation du Sol appliqué au SI

</aside>

## Transformation difficile ##

- Infrastructure 
    - Il faut repenser le SI
    - Considérer l'externalisation dans le Cloud public
- Architecture
    - Il faut adapter les modèles d’architectures *Legacy*
- Applicatif
    - Il faut reconstruire les applications *Legacy*
    - Il faut construire des applications *Cloud-ready*
- Formation
    - Il faut développer les méthodes Agiles
    - Il faut former les agents aux technologies du Cloud
    - Il faut pousser le modèle **Devops**
- sécurité/confidentialité
    - Il faut intégrer la sécurité à tous les niveaux 
    - Il faut faire confiance

<aside class="notes">
   
</aside>
   

# Définitions #

## Cloud ##

Le terme Cloud est devenu très englobant. Aujourd'hui il regroupe la fourniture d'un service, son mode d'accès et son infrastructure. Plusieurs organismes ont essayé de normaliser la définition du **Cloud computing**

## Définition du  NIST ##

 **National Institute of Standards and Technology**

> Cloud computing is a model for enabling ubiquitous, convenient, on-demand network
access to a shared pool of configurable computing resources (e.g., networks, servers,
storage, applications, and services) that can be rapidly provisioned and released with
minimal management effort or service provider interaction. This cloud model is composed
of **five essential characteristics**, **three service models**, and **four deployment models**.

## Caractéristiques ## {.cloudCarac}

- Libre-service et à la demande (paiement à l’usage)
- Accessible sur l'ensemble d'un réseau
- Mutualisation des ressources (Multi tenant)
- S’adapter rapidement à une variation du besoin
- Mesurable (statistiques d’usage, ressources …)


<aside class="notes">
   
</aside>

## Modèles de service ## 

-Saas : SoftWare As A Service
-Paas : Platform As A Service
-Iaas : Infrastruture As A Service


## Modèles de service ## {.cloudServices .figcenter}

![](img/Colloc.png)

<aside class="notes">
   
</aside>

## Modèles de déploiement ##

- Cloud Public
    Une organisation vend des services accessibles à tous    
- Cloud Comunautaire
    L'infrastructure est partagé par plusieurs organismes, elle peut être géré par les organismes ou par une tierce partie
- Cloud Privé
    L'infrastructure est accessible à une seule organisation. Elle peut cependant être géré et hébergée par une tierce partie
- Cloud Hybride
    C'est une composition d'un cloud privé et d'une cloud public ou communautaire pour absorber les pics de charge (Clud Bursting)


## Modèles de déploiement ## {.cloudDeploy .figcenter}

![](img/Clouds.png)

<aside class="notes">
   
</aside>


# SaaS  #

## Software As A Service ##

C'est une application identifié, fournie à la demande pour un utilisateur, l'application et les données sont hébergées dans les Datacenters du fournisseur. En général elle est hautement configurable.

* Wordpress.com
* Solutions de paiement en ligne
* Messagerie/Bureautique (office 365)

`On peut intégrer les offres de sauvegarde en ligne dans cette catégorie (icloud / dropbox ...).`{.fragment .note}

## Software As A Service ## {.figcenter}

![](img/saas.png)

## Usages ##

- Avantages
    - indépendant de la technologies sous-jacente = portable
    - (pratiquement) plus de gestion de la sécurité 
    - réactivité
- Inconvénients
    - limité au service proposé, pas d'adaptation possible
    - risques liés au multi tenant si mauvaise isolation


<aside class="notes">
   
</aside>

# Paas  #

## Platform As A Service ## 

Cette fois ci, le fournisseur propose un support pour votre propre application. Un Paas est constitué d'outils permettant la compilation et/ou le déploiement de code source dans un langage défini. Ce code est ensuite instancié (ou pas) à la manière du **Saas** pour mettre à disposition l'application developée.

* Google App Engine
* Heroku
* ...

## Platform As A Service ## {.figcenter}

![](img/paas.png)


## Usages ##

- Avantages
    - plus besoin de maintenir les OS
    - la sécurité se limitre à celle de l'application
    - réactivitée maximale (Devops)
- Inconvénients
    - visibilité réduite sur la sécurité des couches inférieures
    - **Lock-in** si les API utilisées ne sont pas standardisées.
    - risques liés au multi tenant si mauvaise isolation


<aside class="notes">
   
</aside>

# Iaas  #


## Infrastructure As A Service ##

C'est la base du Cloud Computing, ici le fournisseur offre du CPU, de la RAM, du stockage, du réseau et éventuellements d'autres services d'infrastructures (FireWall, VPN ...).
Le client construit son architecture, ajoute des réseaux, des machines virtuelles, des volumes de stockages persistant... Il installe ensuite les systèmes d'exploitations qu'il désire, les application qu'il souhaite et propose (ou non) ces services sur le réseau (internet ou autre).
Le tout est facturé à la consomation. 

## Infrastructure As A Service ## {.figcenter}

![](img/iaas.png)


## Usages ##

- Avantages
    - contrôle de l'architecture jusqu'à l'OS, nécéssaire pour une gestion accru de la sécuritée. Seule la partie matérielle est déléguée au fournisseur.
- Inconvénients
    - environnement multi-tenant pouvant poser des problèmes de confidentialités si la sécurité n'est pas gérée correctement.
    - visibilité limité sur la politique de sécurité du fournisseur au niveau des hyperviseurs.
    - dépendant de la réactivité du fournisseur en cas d'incident matériel

<aside class="notes">
   
</aside>

# Xaas #


## X (Everything) As A Service ##

On peut étendre la notion de **As A Service** à d'autre types de services. Stockage,  sécurité, base de données...  Une  évolution récente et notable concerne l'évolution du Paas avec le service **Lambda** d'AWS ou encore **Google Cloud Function**.
Avec ces **Function As A Service**, vous pousser le code d'une fonction dans le service et celle ci est exécuté, ne consommant que ce qui est nécessaire, puis elle est détruite.Pas de réservation de ressources, vous êtes facturés pas tranche de 100ms d’exécution. On parle de **Serverless Computing**


<aside class="notes">
   
</aside>



# Techno du Cloud #


## Panorama ##

* Architectures
* Virtualisation
* Matériel
* Mots-clés

<aside class="notes">
   
</aside>

## Architectures ##

* Architecture Scalable
* Convergence / hyperconvergence
* Usages de la virtualisation
    * Système
    * Stockage
    * Réseau
    * ...
* ressources

<aside class="notes">
    
</aside>

# Architecture Scalable #

## Architectures évolutives ##

* Évolutivité verticale (Scale UP)
    * Ajouter des ressources au composant (CPU, RAM, Stockage) 
    * Faibles risques d’incompatibilité
    * Augmente les risques de défaillance (SPOF)

* Évolutivité Horizontale (Scale OUT)
    * Répartir les ressources sur plusieurs composants
    * Requiert des équipements de partage de charge (LB)
    * Nécessite une application compatible
    * Réparti les risques

* Micro service
    * Répartir les modules applicatifs sur les composants
    * Nécessite une application dont l’architecture à été prévu dans ce sens
    * Limite les risques de défaillance complète du système
    * Doit être souvent être complété par de la scalabilité horizontale

<aside class="notes">
    
</aside>

# Convergence #

## Architecture non convergée ##{.figcenter}

![](img/non-converge.png)


## Architecture non convergée ##

- Architecture traditionnelle
- Les composants sont spécialisés avec 
    - Des commutateurs Ethernet
    - Des serveurs
    - Un réseau SAN (FC/iscsi) pour le stockage  

<aside class="notes">

</aside>


## Architecture convergée ##{.figcenter}

![](img/Converge.png)

## Architecture convergé ##

- Infrastructure avec un réseau unifiée 

<aside class="notes">

</aside>

## ... et hyperconvergée ##{.figcenter}

![](img/hyperconverge.png)

## ... et hyperconvergée ##

- Architecture unifiée
- Un composant concentre les fonctions d’infrastructure
- Évolutive (scale out)
- Automatisée via une solution de pilotage logicielle (Software defined)

<aside class="notes">

</aside>


# Usages de la virtualisation #


## Virtualisation du système ##

 Plusieurs niveaux

 * Isolation applicative (Conteneur)
 * Para-virtualisation (hyperviseur type1) 
 * Virtualisation complète (hyperviseur type1)
 * Virtualisation complète (hyperviseur type2)
 * Émulation (cpu différent)

<aside class="notes">
    
</aside>


## Isolation applicative ##

 - Spécifique au monde Unix
 - Isolation de l'espace utilisateur
 - « Partage » du noyau
 - EX IGN : DockerForge

## Isolation applicative ##{.figcenter}

![isolation](img/Diagramme_ArchiIsolateur.png "© Primalmotion-Wikipedia")


<aside class="notes">

</aside>

## Isolation applicative ##

 - Avantages
    - Rapide à mettre en place
    - Pas de perte de performances
    - Adapté au micro-services
    - En forte progression
 - Inconvénients
    - Isolation limitée
    - limité un un noyau commun
    - mécanismes complexes et moins matures

<aside class="notes">

</aside>


## Hyperviseur de type 1 ##

 - Noyau léger
 - Exploitation matériel (Intel VT / AMD-V)
 - Para-virtualisation possible : les OS invités intègrent des mécanismes permettant d’exécuter des instructions directement sur le processeur.
 - Matériel émulé ET/OU partagé
 - Ex : VMware vSphère (IGN) / XenServer (ENSG) / KVM (Oshimae)

## Hyperviseur de type 1 ##{.figcenter}

![Hyperviseur I](img/Diagramme_ArchiHyperviseur.png "© Primalmotion-Wikipedia")

<aside class="notes">

</aside>

## Hyperviseur de type 1 ##

 - Avantages
    - Rapidité (peu de perte)
    - bonne isolation
    - live migration
    - changement des caractéristiques de la VM (éventuellement à la volée)
 - Inconvénients
    - complexité de mise en œuvre
    - OS VM adapté 

<aside class="notes">

</aside>

## Hyperviseur de type 2 ##

  - Logiciel sur OS complet
  - Émulation plus ou moins complète
  - OS VM hétérogènes possibles
  - Ex : Virtualbox (Développeur) / Parallel Desktop (MAC) / QEMU

## Hyperviseur de type 2 ##{.figcenter}

![Hyperviseur II ](img/Diagramme_ArchiEmulateur.png "© Primalmotion-Wikipedia")

<aside class="notes">

</aside>


## Hyperviseur de type 2 ##

- Avantages
    - Simplicité de mise en œuvre
    - OS variés
- Inconvénients
    - Lenteur
    - Ressource limité à celle de l'hôte
    - Grosses images systèmes (export...)

<aside class="notes">

</aside>

## Émulateur ##

- changement de plateforme (ARM sur X86)
- Tout est émulé 
    - => très lent
- Ex : Android Virtual device ... 

<aside class="notes">

</aside>

## Virtualisation du réseau ##

- Network Virtualization
    - Création de tunnels GRE / VxLAN
    - OpenVswitch

<aside class="notes">

</aside>

## Virtualisation du réseau ##{.figcenter}

![](img/VN-tunnel.png)


<aside class="notes">

</aside>

## Virtualisation du réseau ##

- Software Defined Network (SDN)
    - Séparation du contrôle et des données
    - openflow
    - Pilotage des switchs

<aside class="notes">

</aside>


## Virtualisation du réseau ##

- SDWAN
    - Virtualisation des réseaux WAN (MPLS...)
    - Remplacement par une multitude de réseaux internet
    - Orchestration Logicielle
    - Efficace et nettement moins cher!


<aside class="notes">

</aside>


## Virtualisation du stockage  ##

- Software Defined Storage (SDS)
- Stockage Virtuel
    - Une couche contrôle (Gestion, allocation des ressources, Qos, sécurité)
    - Une couche stockage (Parité, thin provisioning, compression …)
    - Services : Stockage objet, Bloc, fichier, HDFS 
- Logiciel
    - Une solution centralisé de gestion du réseau, Qos, Sécurité , ressources, autorisations, quotas...
- EX: VmWare VirtualSAN / CEPH

<aside class="notes">
    
</aside>

## Software Defined Datacenter ##

- (SDDC)
- Virtualisation complète de l’infrastructure
    - Serveurs virtuel
    - Réseau virtuel
    - Stockage virtuel
- Un système d’orchestration centralisé
- Ex: Openstack, Vcloud

<aside class="notes">
    Seul les yahoo amazon et google peuvent mettre en place de tels mécanismes
</aside>


## Virtualisation et sécurité ##

- Risques Additionnels
    - Concentration des ressources (stockage, réseau, système), des outils et des rôles.
    - Des composants additionnels à maitriser et à surveiller
- Vigilance
    - La couche d’abstraction est un système à part entière, à mettre à jour et sécuriser
    - Les habilitations d’accès aux couches d’abstractions doivent êtres ajustées avec soins.
    - Les systèmes critiques doivent être protégés (cloisonnement par ressources dédiés ou réservations de ressources, Qos…) 

<aside class="notes">
    
</aside>


## Virtualisation et sécurité ## 

- Apports
    - Une disponibilité plus élevée
    - Des déploiements (potentiellement ) automatisés
    - Des ressources plus faciles à reconstruire (Sauvegarde, PRA…)

<aside class="notes">
    
</aside>


# Ressources Physiques #


## Datacenters ##{.figcenter}

![Datacenter modulaire](img/datacenter-google.jpg)


## Tiers ##{.figcenter}

![Datacenter Tiers](img/data-center-tiers.png)


## Serveurs ##{.figcenter}

![Cloud Servers](img/hyperServer.jpg)


## Réseau ##{.figcenter}

![Cloud Network](img/hyperSwitch.jpg)


## Stockage ##{.figcenter}

![Cloud Storage](img/hyperStorage.jpg)


## Climatisation ##{.figcenter}

![Couloirs Chauds/Froids](img/chaudfroid.png)


## Electricité ##

- L'energie représente ~40% du coût d'exploitation
- le refroidissement 40% à 50%
- datacenter moderne et optimisé = 1.5 à 3KW/m2

- exemple récent de l'envollé du bitcoin : en 2020 le calcul de la blockchain consommerai toute l'énergie de la planète.

`GREEN IT`{.note .fragment}

<aside class="notes">

Au moins 77 KWh pour une transaction

une des dernières estimations de la consommation annuelle du minage de Bitcoin est de 23,07 terawattheure.



</aside>



## Exemple d'infrastructure Cloud ## 

- Cas pratique : Constitution d'un cloud Openstack 
    - 10 serveurs
    - reliés sur au moins 3 réseaux différents
        - Admin
        - Stockage
        - Traffic réseau
    - Répartitions des rôles sur les différents serveurs pour limiter les SPOFs
        - 3 Contrôleurs (NOVA/HORIZON)
        - 3 Computes (NOVA/NEUTRON)
        - 1 Networks (NEUTRON)
        - 3 Stockages (CINDER/SWIFT/CEPH)
    - Accès et exploitation via API / Dashboard


# Mots clés #

## Abstraction (api) ##

Une **API** (Application Programming Interface) Permet de faire abstraction de l'élément sur lequel elle se pose. 
Elle décrit comment le consommateur peut utiliser les fonctions du fournisseur. 
Dans la Cloud il est primordial que le maximum d'échanges se fassent au travers d'API pour garantir l’interopérabilité. 


## Interopérabilité ##

C'est la faculté qu'un système a de s'interfacer avec un autre sans le connaître. Interopérabilité est primordiale dans un environnement hétérogène. Ceci est notamment faisable grâce à la description complète des interfaces de ce système et à l'utilisation de format d'échanges normés ou standardisés.


## Multi-tenant ##

Un SI **multi-tenant** désigne une infrastructure qui partage ses resosurces entre plusieurs clients. Chaque client de doit pas avoir conscience que les autres existent.


## InfraAsCode ##

l'**Infrastructure As A Code** désigne les technique permettant de définir une infrastructure pas du code source. cette dernière est alors totalement automatisable et ré-instanciable à la demande. Ceci est possible lorsque tous les éléments de l'infrastructure à été virtualisé.


## WebServices ##

Les **Service Web** désigne plusieurs chose mais principalement un concept d'API exposé sur le WEB utilisant une technologie d'échange, le plus souvent en mode **SOA** (Architecture orienté service) ou des fonctions sont exécutée à distance.

Les API RESTful sont grandement utilisé dans le monde des Webservices. (HTTP + CRUD)


## ServerLess ##

**ServerLess** désigne les services proposé en mode Cloud qui ne comprennent pas la livraison d'une machine pour réaliser l'opération, l'appel au service génère une mise à disposition de ressource en fonction de la charge nécessaire à l’exécution de la demande et la libère instantanément.


## StateLess ##

Se dit d'une application ou d'un service qui ne conserve pas en interne d'état d'une connection d'un client entre 2 appels au service. Cel permet de faire traiter la demande par des machines différentes à chaque requète. C'est une des notions primordiale du développement d'application **Cloud-Ready**

## autonomic computing ##

 (IBM autoréparation des programme)
 TODO



## Systèmes repartis ##

Un système réparti est un SI dans le quel l'information et l’exécution est distribuée sur un ensemble de nœuds constituant un Cluster. Cet ensemble peut être hétérogène et doit être scalable.

ex: seti@home


## High Availability ##

la **HA** désigne la capacité d'un système à *survivre* à la perte d'un élément de son infrastructure. Ceci en permettant l'utilisation d'une autre ressource de façon transparente pour l'utilisateur. On élimine ainsi les SPOF (*Single Point Of Failure*). Un **Load-balancer** permet la HA des service Web par exemple.

## PRA/PCA ##

* PRA  : Plan de reprise d'activité. Désigne le fait qu'il existe une solution pour reprendre l'activité d'un SI après un temps prévu (le plus court possible)

* PCA : Plan de continuité d'activité. Une solution existe pour continuer l'activité d'un service en cas de perte d'un élément constituant ce service (peut être un Datacenter tout entier, il faut donc alors basculer sur un autre Datacenter de façon transparente pour l’utilisateur).


## CDN ##

**Content Delivery Network** désigne un réseau synchronisé de serveurs permettant la diffusion de données au plus près de l'utilisateur (géographiquement parlant) afin de limiter l'effet de latence.


## Devops ## 

**Devops** désigne un courant de pensée informatique visant à éliminer le conflit entre les **Développeurs** qui souhaitent faire évoluer un SI et les **Opérationnels** qui souhaitent avoir un SI le plus Stable possible.

Il est née de l'utilisation de bout en bout des méthodes **Agiles**


# Enjeux - Avenir #


## Responsabilite ##

- Niveau de service : Engagement sur :
    - Disponibilité garantie (en %) 
    - Garantie de temps d’intervention et rétablissement
    - Qualité de service (performance)

- Responsabilités :
    - Définir les périmètres respectifs
    - Établir des pénalités et permettre des audits

- Réversibilité  (Entrante et Sortante)
    - S’assurer de la possibilité d'export des données et de leurs exploitabilités

<aside class="notes">
   
</aside>


## Sécurité ##

- Cloud Security Alliance
- Confidentialité : Vigilance sur :
    - Les systèmes de  gestion des accès / mécanismes de cloisonnement entre clients
    - Localisation des centre de données (hors UE) et nationalité du fournisseur (EU, Patriot Act)
- Audit fréquents à tous les niveaux
- Mise à jour régulière et systématique
- Chiffrement des flux
- Isolation des composants

## Interopérabilité ##

- Facilité par les outils d'automatisation et l'utilisation massive de l'opensource
- Difficile au niveau des données


## Open source ##

TODO


## Trafic réseau ##

TODO




# Try It Yourself #

## TP comparaison ##

- Objectif : Comparer les différents types de virtualisation
    - system
    - stockage
    - réseau

## Comparaison systeme ##

> - compilation d'un code calculant les **n** nombres premiers

``` 
wget -O prime.c https://codepaste.net/TODO
```
``` 
gcc prime.c -o prime
```
``` 
time ./prime 10000
```
```
Calcul des 10000 premiers nombres premiers
real    0m1.573s
user    0m1.572s
sys     0m0.000s
```

## Comparaison systeme ##

> - Lancement via Docker (présent sur votre machine)

> - Dans un fichier **Dockerfile** :
```
FROM debian
ADD ./prime /prime
CMD [ ./prime 0 ]
```
```
docker build -t prime .
```
```
time docker run -ti prime /prime 10000
```
```
Calcul des 10000 premiers nombres premiers
real    0m2.246s
user    0m0.012s
sys     0m0.004s
```

## Comparaison systeme ##

> - Lancement dans un émulateur arm
```
sudo apt-get install qemu-system-arm
```
> - récupérer les fichiers nécéssaires sur **https://people.debian.org/~aurel32/qemu/armel/** 
> lancer l'émulateur
```
qemu-system-arm -M versatilepb -kernel vmlinuz-3.2.0-4-versatile -initrd initrd.img-3.2.0-4-versatile -append "root=/dev/sda1" -hda debian_wheezy_armel_standard.qcow2
```
> - Ajouter/compiler le binaire **prime** dans la VM puis tester de la même manière
```
Calcul des 10000 premiers nombres premiers
real    0m36.174s
user    0m36.130s
sys     0m0.010s
```



## TP Saas ##

**Objectif** : déployer une application Saas

Connectez vous sur le site Wordpress.com. c'est un service de SaaS basé sur le CMS(Content Managment System) Open source Wordpress, disponible sur le site wordpress.org 

Laissez vous guider dans la création de votre site.
Pous pouvez ensuite faire des modifications sommaires sur la page d'accueil.

`Question : D'après vous, quelle différence peut-on noter entre le logiciel Wordpress et le service de Saas Wordpress.com `{.note}

`Question : Quels éléments faudrait-il mettre en place pour proposer notre propre service de Saas basé sur Wordpress?`{.note}



## TP Paas ##

Objectif : déployer une appli Paas

L'objectif ici est de déployer une application à partir d'un code source.

- Connectez vous sur la plateforme Paas Heroku.com et créez un compte
- Suivez le https://devcenter.heroku.com/start pour créer une application node.js

`Question : Une fois le tutoriel de base réalisé. Trouvez une solution pour déployer le code suivant dans une nouvelle application sans utiliser l'outil CLI heroku-toolbelt. Donnez une explication des technologies qui selon vous sont misent en oeuvre ici. `{.note}

> https://github.com/cedricici/findmefast.git


## TP Iaas ##

Objectif : Créer une infra minimale en Iaas

Utilisez la VM devstack fournie pour tester le déploiement d'une application n-tiers
Vous aurez besoin de définir 
- un réseau 
