---
title : Technologies de Cloud Computing
sub-title : M-TSI
author : Cédric Esnault
date : 12/12/2017 - IGN/ENSG
---


# Cloud Computing #

## Plan de la présentation ##{.planPrez}

* Concepts / Définitions
    * a
    * b
* Technologies
    * c
* Enjeux / Avenir
    * d
    * e

<aside class="notes">
   
</aside>


# Concepts #



## Les Origines ##

* Hérité de l'informatique client-serveur sur des **MainFrame** (L'accès distant était alors représenté par un nuage)
* Vers 2000, les hébegeurs proposent des applications pré-installées dans leur datacenters (Email, CRM ...)
* Apparition du terme "Cloud" vers 2006 via les services Amazon

`Amazon a eu l'idée de mettre à la disposition du public son énorme infrastructure mondiale, dimensionnée pour les pics (Noël...) et sous-utilisée le reste du temps`{.note .fragment}

<aside class="notes">
   
</aside>


## Un besoin d'industrialisation ##

Les entreprises souhaitent en finir avec les pannes informatiques.

* Industrialiser les processus du SI, limiter l'intervention humaine, automatiser
* Ceci nécéssite des infrastructures importantes pour que l'investissement en vaille la peine
* Cela libère des ressources IT pour faire du Business plutôt que réparer le SI


<aside class="notes">
   
</aside>


## Un besoin de rationalisation ##

Les entreprises ont besoin de baisser les coûts et d'utiliser au maximum l'investissement du très cher matériel informatique.

* Les solutions sont multiples
    * Urbanisation du SI
        * POS
        * modularité
        * subsidiarité
        * limiter les adhérences
    * Élasticité / Scalabilité
        * absorber les pics de charges
        * repartir les resources physiques
        * TODO

<aside class="notes">
   
</aside>

## La difficulté de la transformation ##

* Infrastructure 
    * Il faut repenser le SI
    * Considérer l'externalisation dans le cloud public
* Applicatif
    * Il faut reconstruire les applications *Legacy*
    * Il faut construire des applications Cloud-ready
* Formation
    * Il faut développer les méthodes Agiles
    * Il faut former les agents aux technologies du Cloud
    * Il faut pousser le modèle **Devops**
* sécurité/confidentialité
    * Il faut intégrer la sécurité à tous les niveaux 
    * Il faut faire confiance

<aside class="notes">
   
</aside>
   

# Définitions #

## Cloud ##

Le terme Cloud est devenu très englobant. Aujourd'hui il regroupe la fourniture d'un service, son mode d'accès et son infrastructure.
Les aspects principaux du Cloud sont (non exhaustif):

* Des ressources infinies
* Un accès distant
* Une tarification à l'usage
* un dynamisme (en opposition à statique)

## vision NIST ##

> Cloud computing is a model for enabling ubiquitous, convenient, on-demand network
access to a shared pool of configurable computing resources (e.g., networks, servers,
storage, applications, and services) that can be rapidly provisioned and released with
minimal management effort or service provider interaction. This cloud model is composed
of five essential characteristics, three service models, and four deployment models.

## Les caracteristiques ## {.cloudCarac}

* Libre service à la demande
* Accès réseau à haut débits
* Pool de ressources isolables
* Provisionnement et élastique rapide
* Supervision (mesure)

<aside class="notes">
   
</aside>


## Les modèles d'accès ## {.cloudAccess}

* Privé
* Public
* Hybride

<aside class="notes">
   
</aside>

## Les modèles de déploiement ## {.cloudDeploy}

* SaaS 
* Paas 
* Iaas 
* Xaas


<aside class="notes">
   
</aside>





# SaaS  #


## Software As A Service ##

C'est une application identifié, fournie à la demande pour un utilisateur, l'application et les données sont hébergées dans les datacenter du fournisseur. En général elle est hautement configurable.
* Wordpress.com
* Solutions de paiement en ligne
* Messagerie/Bureautique (office 365)
On peut intégrer les offres de sauvegarde en ligne dans cette catégorie (icloud / dropbox ...).

Usages 

Technologies 

Avantages inconveniant risques?

<aside class="notes">
   
</aside>

# Paas  #


## Platform As A Service ##

Cette fois ci, le fournisseur propose un support pour votre propre application. Un Paas est constitué d'outils permettant la compilation et/ou le déploiement de code source dans un langage défini. Ce code est ensuite instancié (ou pas) à la manière du __Saas__ pour mettre à disposition l'application developée.
* Google App Engine
* Heroku
* ...

Usages

Technologies

Avantages inconvenients risques?

<aside class="notes">
   
</aside>

# Iaas  #


## Infrastructure As A Service ##

C'est la base du Cloud Computing, ici le fournisseur offre du CPU, de la RAM, du stockage, du réseau et éventuellements d'autres services d'infrastructures (FireWall, VPN ...).
Le client construit son architecture, ajoute des réseaux, des machines virtuelles, des volumes de stockages persistant... Il installe ensuite les systèmes d'exploitations qu'il désire, les application qu'il souhaite et propose (ou non) ces services sur le réseau (internet ou autre).
Le tout est facturé à la consomation. 

Usages

Technologies

Avantages inconvenients risques?

<aside class="notes">
   
</aside>

# Xaas #


## __X__ pour n'importe quoi (Everything) As A Service ##

On peut étendre la notion de **As A Service** à d'autre types de services. Stockage,  sécurité, base de données...  Une  évolution récente et notable concerne l'évolution du Paas avec le service **Lambda**.
Avec Lambda, vous pousser le code d'une fonction dans le service et celle ci est exécuté, ne consomant que ce qui est nécéssaire, puis elle est détruite.Pas de réservation de ressources, vous êtes facturés pas tranche de 100ms d'éxécution. On parle de **Serverless Computing**


Usages


Technologies


Avantages inconvenients risques?



<aside class="notes">
   
</aside>


# Cloud Privé #

## Définition ##





# Cloud Public #

## Définition ##




# Cloud Hybride #

## Définition ##



# Les technologies du Cloud #


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
