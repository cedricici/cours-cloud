---
title : Technologies de Cloud Computing
sub-title : M-TSI
author : Cédric Esnault
date : 12/12/2017 - IGN/ENSG
---


# Cloud Computing #

## Plan de la présentation ##{.planPrez}

- Concepts / Définitions
    - a
    - b
- Technologies
    - c
- Enjeux / Avenir
    - d
    - e

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
of five essential characteristics, three service models, and four deployment models.

## Les caractéristiques ## {.cloudCarac}

- Libre-service et à la demande (paiement à l’usage)
- Accessible sur l'ensemble d'un réseau
- Mutualisation des ressources (Multi tenant)
- S’adapter rapidement à une variation du besoin
- Mesurable (statistiques d’usage, ressources …)


<aside class="notes">
   
</aside>


## Cloud ##

- Niveau de service : Engagement sur :
    - Disponibilité garantie (en %) 
    - Garantie de temps d’intervention et rétablissement
    - Qualité de service (performance)

- Confidentialité : Vigilance sur :
    - Les systèmes de  gestion des accès / mécanismes de cloisonnement entre clients
    - Localisation des centre de données (hors UE) et nationalité du fournisseur (EU, Patriot Act)

<aside class="notes">
   
</aside>


## Cloud ## 

- Responsabilités :
    - Définir les périmètres respectifs
    - Établir des pénalités et permettre des audits

- Réversibilité  (Entrante et Sortante)
    - S’assurer de la possibilité d'export des données et de leurs exploitabilités


## Modèle de service ## {.cloudServices .figcenter}

![](img/Colloc.png)

<aside class="notes">
   
</aside>

## Modèles de déploiement ## {.cloudDeploy .figcenter}

![](img/Clouds.png)

<aside class="notes">
   
</aside>

# SaaS  #

## Software As A Service ##

C'est une application identifié, fournie à la demande pour un utilisateur, l'application et les données sont hébergées dans les datacenter du fournisseur. En général elle est hautement configurable.
* Wordpress.com
* Solutions de paiement en ligne
* Messagerie/Bureautique (office 365)
On peut intégrer les offres de sauvegarde en ligne dans cette catégorie (icloud / dropbox ...).

## Software As A Service ## {.figcenter}

![](img/saas.png)

## Usages ##

Avantages inconveniant risques?

<aside class="notes">
   
</aside>

# Paas  #

## Platform As A Service ## 

Cette fois ci, le fournisseur propose un support pour votre propre application. Un Paas est constitué d'outils permettant la compilation et/ou le déploiement de code source dans un langage défini. Ce code est ensuite instancié (ou pas) à la manière du __Saas__ pour mettre à disposition l'application developée.
* Google App Engine
* Heroku
* ...

## Platform As A Service ## {.figcenter}

![](img/paas.png)


## Usages ##

Avantages inconvénients risques?

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

Avantages inconvénients risques?

<aside class="notes">
   
</aside>

# Xaas #


## X (Everything) As A Service ##

On peut étendre la notion de **As A Service** à d'autre types de services. Stockage,  sécurité, base de données...  Une  évolution récente et notable concerne l'évolution du Paas avec le service **Lambda** d'AWS ou encore ** Google Cloud Function **.
Avec ces **Function As A Service**, vous pousser le code d'une fonction dans le service et celle ci est exécuté, ne consommant que ce qui est nécessaire, puis elle est détruite.Pas de réservation de ressources, vous êtes facturés pas tranche de 100ms d’exécution. On parle de **Serverless Computing**


## Usages ##

Avantages inconvénients risques?



<aside class="notes">
   
</aside>


# Cloud Privé #

## Définition ##





# Cloud Public #

## Définition ##




# Cloud Hybride #

## Définition ##




# Techno du Cloud #


## Panorama ##

* Architectures
* Virtualisation
* Matériel
* Méthodologie

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
* Sécurité    


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

![Hyperviseur I](https://upload.wikimedia.org/wikipedia/commons/f/faimgchiHyperviseur.png "© Primalmotion-Wikipedia")

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

* Software Defined Storage (SDS)
* Stockage Virtuel
    * Une couche contrôle (Gestion, allocation des ressources, Qos, sécurité)
    * Une couche stockage (Parité, thin provisioning, compression …)
    * Services : Stockage objet, Bloc, fichier, HDFS 
* Logiciel
    * Une solution centralisé de gestion du réseau, Qos, Sécurité , ressources, autorisations, quotas...
* EX: VmWare VirtualSAN / CEPH

<aside class="notes">
    
</aside>

## Software Defined Datacenter ##

* (SDDC)
* Virtualisation complète de l’infrastructure
    * Serveurs virtuel
    * Réseau virtuel
    * Stockage virtuel
* Un système d’orchestration centralisé
* Ex: Openstack, Vcloud

<aside class="notes">
    Seul les yahoo et google peuvent mettre en place de tels mécanismes
</aside>


## Virtualisation et sécurité ##

* Risques Additionnels
    * Concentration des ressources (stockage, réseau, système), des outils et des rôles.
    * Des composants additionnels à maitriser et à surveiller
* Vigilance
    * La couche d’abstraction est un système à part entière, à mettre à jour et sécuriser
    * Les habilitations d’accès aux couches d’abstractions doivent êtres ajustées avec soins.
    * Les systèmes critiques doivent être protégés (cloisonnement par ressources dédiés ou réservations de ressources, Qos…) 

<aside class="notes">
    
</aside>


## Virtualisation et sécurité ## 

* Apports
    * Une disponibilité plus élevée
    * Des déploiements (potentiellement ) automatisés
    * Des ressources plus faciles à reconstruire (Sauvegarde, PRA…)

<aside class="notes">
    
</aside>








## Environnement ##

virtu
ha
localisation
pra/pca
cdn

devops


# Ressources Physiques #

## Datacenters ##



## Serveurs ##

## Réseau ##

## Stockage ##


# Virtualisation #

## Virtu/paravirtu

## Conteneurs ##

## Convergence ##

# Mots clés #

## Abstraction (api) ##

## Interopérabilité ##

## InfraAsCode ##

## WebServices ##

## ServerLess ##

## Microservices ##


## autonomic computing ##

 (IBM autoréparation des programme)

## Systèmes repartis ##

* scalable
* hétérogènes

ex: seti@home



# Enjeux / Avenir #

## sécurité ##

* Cloud SEcurity Aliance

* Localisation

* Audit

* mise à jour


## Responsabilitées ##


## confidentialité ##

* Chiffrement
* isolation

## Interopérabilité ##

* Facilité par les outils d'automatisation et l'utilisation massive de l'opensource
* Difficile au niveau des données


## Open source ##


## Trafic réseau ##


## Écologie ##


# Try the Cloud #

## Saas ##
    SaaS : créer un wordpress

## Paas ##
    Paas : déployer une appli heroku

## Iaas ##
    Iaas : Utiliser un devstack : créer une appli Rok4?

## Faas ##
    FaaS?  
    
## Saas ##
    public cloud :  ex on azure OR aws
