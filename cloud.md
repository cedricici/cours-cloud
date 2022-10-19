---
title : Technologies de Cloud Computing
sub-title : M-TSI
author : Cédric Esnault
date : 18/10/2022 - IGN/ENSG
---



# Cloud Computing #

## Plan de la présentation ##

- Concepts
- Définitions
  - Saas / Paas / Iaas / Xaas
- Technologies
  - Architectures
  - Convergence
  - Virtualisation
  - Ressources
- Migration dans le Cloud
  - Stratégies
  - Développement
- Mots-clés
- Enjeux
- DiY

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
    - POS (plan d'occupation)
    - modularité
    - subsidiarité
    - limiter les adhérences
  - Élasticité / Scalabilité
    - absorber les pics de charges
    - repartir les ressources physiques

<aside class="notes">

   POS : Plan d'occupation du Sol appliqué au SI<br>
   modularité : découpage en modules réutilisables<br>
   subsidiarité :  équilibre entre la gestion centralisé et décentralisé = gérer au plus proche<br>

</aside>

## Transformation difficile  1/2 ##

- Infrastructure
  - Il faut repenser le SI
  - Considérer l'externalisation dans le Cloud public
- Architecture
  - Il faut adapter les modèles d’architectures *Legacy*
- Applicatif
  - Il faut transformer les applications *Legacy*
  - Si possible, il faut les réécrire en *Cloud-ready*

## Transformation difficile 2/2 ##

- Formation
  - Il faut développer les méthodes *Agiles*
  - Il faut former les agents aux technologies du Cloud
  - Il faut pousser les modèles [Devops](#/devops)
- sécurité/confidentialité
  - Il faut intégrer la sécurité à tous les niveaux : **DevSecOps**
  - Il faut faire confiance
  - Il faut contrôler : **FinOps**

<aside class="notes">

</aside>

# Définitions #

## Cloud ##

Le terme Cloud est devenu très englobant. Aujourd'hui il regroupe la fourniture d'un service, son mode d'accès et son infrastructure. Plusieurs organismes ont essayé de normaliser la définition du **Cloud computing**

<aside class="notes">

</aside>

## Définition du  NIST ##

*National Institute of Standards and Technology*

> Cloud computing is a model for enabling ubiquitous, convenient, on-demand network
access to a shared pool of configurable computing resources (e.g., networks, servers,
storage, applications, and services) that can be rapidly provisioned and released with
minimal management effort or service provider interaction. This cloud model is composed
of **five essential characteristics**, **three service models**, and **four deployment models**.

<aside class="notes">

</aside>

## Caractéristiques ## {.cloudCarac}

- Libre-service et à la demande (paiement à l’usage)
- Accessible sur l'ensemble d'un réseau
- Mutualisation des ressources (Multi tenant)
- S’adapter rapidement à une variation du besoin (scalabilité)
- Mesurable (statistiques d’usage, ressources …)

<aside class="notes">

</aside>

## Modèles de service ##

- Saas : SoftWare As A Service
- Paas : Platform As A Service
- Iaas : Infrastruture As A Service

<aside class="notes">

</aside>

## Modèles de service ## {.cloudServices .figcenter}

![](img/Colloc.png)

<aside class="notes">

</aside>

## Modèles de déploiement ##

- Cloud Public
    Une organisation vend des services accessibles à tous
- Cloud Communautaire
    L'infrastructure est partagé par plusieurs organismes, elle peut être géré par les organismes ou par une tierce partie
- Cloud Privé
    L'infrastructure est accessible à une seule organisation. Elle peut cependant être gérée et hébergée par une tierce partie
- Cloud Hybride
    C'est une composition d'un Cloud privé et d'un Cloud public ou communautaire pour absorber les pics de charge (Cloud Bursting)

<aside class="notes">

</aside>

## Modèles de déploiement ## {.cloudDeploy .figcenter}

![](img/Clouds.png)

<aside class="notes">

</aside>

# SaaS #

## Software As A Service ##

C'est une application identifié, fournie à la demande pour un utilisateur, l'application et les données sont hébergées dans les Datacenters du fournisseur. En général elle est hautement configurable.

* Wordpress.com
* Solutions de paiement en ligne
* Messagerie/Bureautique (office 365)

`On peut intégrer les offres de sauvegarde en ligne dans cette catégorie (icloud / dropbox ...).`{.fragment .note}

<aside class="notes">

</aside>

## Software As A Service ## {.figcenter}

![](img/saas.png)

<aside class="notes">

</aside>

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

# Paas #

## Platform As A Service ##

Cette fois ci, le fournisseur propose un support pour votre propre application. Un **Paas** est constitué d'outils permettant la compilation et/ou le déploiement de code source dans un langage défini. Ce code est ensuite instancié (ou pas) à la manière du **Saas** pour mettre à disposition l'application développée.

- Google App Engine
- Heroku
- ...

<aside class="notes">

</aside>

## Platform As A Service ## {.figcenter}

![](img/paas.png)

<aside class="notes">

</aside>

## Usages ##

- Avantages
  - plus besoin de maintenir les OS
  - la sécurité se limite à celle de l'application
  - réactivité maximale (Devops)
- Inconvénients
  - visibilité réduite sur la sécurité des couches inférieures
  - **Lock-in** si les API utilisées ne sont pas standardisées.
  - risques liés au multi tenant si mauvaise isolation

<aside class="notes">

</aside>

# Iaas #

## Infrastructure As A Service ##

C'est la base du Cloud Computing, ici le fournisseur offre du CPU, de la RAM, du stockage, du réseau et éventuellement d'autres services d'infrastructures (FireWall, DNS, VPN ...).
Le client construit son architecture, ajoute des réseaux, des machines virtuelles, des volumes de stockages persistant... Il installe ensuite les systèmes d'exploitations qu'il désire, les applications qu'il souhaite et propose (ou non) ces services sur le réseau (internet ou autre).
Le tout est facturé à la consommation.

<aside class="notes">

Infrastructure As A Code :
    définir l'infrastructure dans un code réutilisable

</aside>

## Infrastructure As A Service ## {.figcenter}

![](img/iaas.png)

<aside class="notes">

</aside>

## Usages ##

- Avantages
  - contrôle de l'architecture jusqu'à l'OS, nécessaire pour une gestion accru de la sécurité. Seule la partie matérielle, ainsi que la gestion des hyperviseurs et des services proposés est déléguée au fournisseur.
- Inconvénients
  - environnement multi-tenant pouvant poser des problèmes de confidentialités si la sécurité n'est pas gérée correctement.
  - visibilité limité sur la politique de sécurité du fournisseur au niveau des hyperviseurs.
  - dépendant de la réactivité du fournisseur en cas d'incident matériel

<aside class="notes">
  
</aside>

# Caas/Kaas #

## Container As A Service ## {.figcenter}

![](img/kaas.jpg)

<aside class="notes">

</aside>

## Container As A Service ##

Un nouveau modèle devient disponible, le **Container As A Service**

- un peu différent du *Iaas*, pas vraiment du *Paas*
- On consomme (et paye) des nœuds dans lesquels on déploie des applications en mode **Devops**
- L'application doit être résiliente et s'auto-réparer
- Le **Cluster** est nativement élastique
- C'est le CSP qui gère l'exploitation du Cluster
- La facturation se fait au nombre de nœuds du cluster indépendamment du nombre de conteneurs *actifs*
- Le leader des orchestrateur de conteneur est [Kubernetes](#/kubernetes)

<aside class="notes">

</aside>

# Xaas #

## X (Everything) As A Service ##

On peut étendre la notion de **As A Service** à d'autre types de services. Stockage,  sécurité, base de données, Machine Learning/IA ...  Une  évolution notable concerne l'évolution du **Paas** avec le service **Lambda** d'AWS ou encore **Google Cloud Function**.
Avec ces **Function As A Service**, vous poussez le code d'une fonction dans le service et celle ci est exécutée, ne consommant que ce qui est nécessaire, puis elle est détruite.Pas de réservation de ressources, vous êtes facturés par tranche de 100ms d’exécution. On parle de **Serverless Computing**

<aside class="notes">
  les serverless utilise du Kaas

</aside>

# Technos du Cloud #

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

## Microservices ## 

* Micro service
  * Répartir les modules applicatifs sur les composants
  * Nécessite une application dont l’architecture à été prévu dans ce sens
  * Limite les risques de défaillance complète du système
  * S'accompagne d'une utilisation massive de services managés
  * Doit être souvent être complété par de la scalabilité horizontale
  * Attention à ne pas tomber dans l’excès inverse au risque d'avoir un système inmaintenable

<aside class="notes">

</aside>

# Convergence #

## Architecture non convergée ##{.figcenter}

![](img/non-converge.png)

<aside class="notes">

</aside>

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

<aside class="notes">

</aside>

## Architecture convergé ##

- Infrastructure avec un réseau unifiée

<aside class="notes">

</aside>

## ... et hyperconvergée ##{.figcenter}

![](img/hyperconverge.png)

<aside class="notes">

</aside>

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

* Isolation applicative (Conteneur)
* Para-virtualisation (hyperviseur type1)
* Virtualisation complète (hyperviseur type1)
* Virtualisation complète (hyperviseur type2)
* Émulation (cpu différent)

<aside class="notes">

</aside>

## Isolation applicative ##

- Initialement spécifique au monde Unix
- Isolation de l'espace utilisateur
- « Partage » du noyau
- EX IGN : DockerForge

<aside class="notes">

Maintenant disponible sous Windows

</aside>

## Isolation applicative ##{.figcenter}

![](img/Diagramme_ArchiIsolateur.png)

<aside class="notes">

</aside>

## Hyperviseur de type 1 ##

- Noyau léger
- Exploitation matériel (Intel VT / AMD-V)
- Para-virtualisation possible : les OS invités intègrent des mécanismes permettant d’exécuter des instructions directement sur le processeur.
- Matériel émulé ET/OU partagé
- Ex : VMware vSphère (IGN) / XenServer (ENSG) / KVM (Oshimae)

<aside class="notes">

</aside>

## Hyperviseur de type 1 ##{.figcenter}

![](img/Diagramme_ArchiHyperviseur.png "© Primalmotion-Wikipedia")

<aside class="notes">

</aside>

## Hyperviseur de type 1 ##

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

## Virtualisation du stockage ##

- Software Defined Storage (SDS)
- Stockage Virtuel
  - Une couche contrôle (Gestion, allocation des ressources, Qos, sécurité)
  - Une couche stockage (Parité, thin provisioning, compression …)
  - Services : Stockage objet, Bloc, fichier, HDFS
- Logiciel
  - Une solution centralisé de gestion du réseau, Qos, Sécurité , ressources, autorisations, quotas...
- EX: VmWare VirtualSAN / CEPH / S3

<aside class="notes">

Le stockage Objet, S3 en tête,  est le nouveau standard de fait de stockage virtualisé

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
    Seul les grand acteur du Cloud peuvent mettre en place de tels mécanismes
    AWS, GCP, Azure, ce sont les hyperscalers
</aside>

## Virtualisation et sécurité ##

- Risques Additionnels
  - Concentration des ressources (stockage, réseau, système), des outils et des rôles.
  - Des composants additionnels à maîtriser et à surveiller
- Vigilance
  - La couche d’abstraction est un système à part entière, à mettre à jour et sécuriser
  - Les habilitations d’accès aux couches d’abstractions doivent êtres ajustées avec soins.
  - Les systèmes critiques doivent être protégés (cloisonnement par ressources dédiés ou réservations de ressources, Qos…)

<aside class="notes">

</aside>

## Virtualisation et sécurité ##

- Apports
  - Une disponibilité plus élevée
  - Des déploiements (potentiellement) automatisés
  - Des ressources plus faciles à reconstruire (Sauvegarde, PRA…)

<aside class="notes">

</aside>

# Ressources Physiques #

## Datacenters ##{.figcenter}

![Datacenter modulaire](img/datacenter-google.jpg)

<aside class="notes">

</aside>

## Tiers ##{.figcenter}

![Datacenter Tiers](img/data-center-tiers.png)

<aside class="notes">

</aside>

## Serveurs ##{.figcenter}

![Cloud Servers](img/hyperServer.jpg)

<aside class="notes">

</aside>

## Réseau ##{.figcenter}

![Cloud Network](img/hyperSwitch.jpg)

<aside class="notes">

</aside>

## Stockage ##{.figcenter}

![Cloud Storage](img/hyperStorage.jpg)

<aside class="notes">

</aside>

## Climatisation ##{.figcenter}

![Couloirs Chauds/Froids](img/chaudfroid.png)

<aside class="notes">

</aside>

## Électricité ##

- L’énergie représente ~40% du coût d'exploitation
- le refroidissement 40% à 50%
- Datacenter moderne et optimisé = 1.5 à 3KW/m2

Exemple de l’envolée du Bitcoin : si la flambée du bitcoin démarrée en 2017 avait continuée , en 2020 le calcul de la blockchain aurait consommé toute l'énergie de la planète.
Cette consomation s'est stabilisée et équivaut aujourd'hui à peu près à la consomation de la suisse.

`GREEN IT`{.note .fragment}

<aside class="notes">

Au moins 77 KWh pour une transaction Bitcoin

une des dernières estimations de la consommation annuelle du minage de Bitcoin est de 58,07 terawattheure.

Requete Google 0.0003kWh 0.2g CO2 , 7g selon chercheur Wissner-Gross

L'envoi d’un mail avec une pièce jointe de 1 Mo dégage 19 grammes de CO2 et sa consommation électrique est équivalente à celle d’une ampoule pendant une heure.

les estimations sont très complexe et différent selon les sources
un film de 60mn sur Netflix = entre 0.03kWh (en SD sur un smartphone en Wifi) et 6.6 kWh selon the Shift Project

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

<aside class="notes">

</aside>

# Migration dans le Cloud #

## Move to cloud ##{.figcenter}

<aside class="notes">

TODO: trouver une image move2Cloud

</aside>

## Stratégies de Migration ##

On identifie **6** différentes stratégies pour migrer une application **legacy** dans un environnement de Cloud.

- Rehosting
- Replatforming
- Refactoring
- Repurchasing
- Retain
- Retire
  
<aside class="notes">

<https://pisquare.fr/les-6-strategies-de-migration-vers-le-cloud/>

</aside>

## Rehosting ##

 Cette stratégie aussi appelée **Lift and shift** Consiste à déplacer l'application sans en changer le code

- Avantages : Assez simple et rapide, si des mécanismes spécifiques ne sont pas mis en place dans l'architecture initiale
- Inconvénients : peu d'intérêt car le coût augmente, on ne profite pas des intérêts du Cloud

## Replatforming ##

On adapte l'application pour que cela fonctionne mieux, par exemple en utilisant des bases de données managées. (Cloud Ready)

- Avantages : Assez simple, on améliore la maintenabilité du système
- Inconvénients : on profite assez peu des intérêts du Cloud (conso à la demande, auto-scaling...)

## Refactoring ##

On réécrit l'application et son architecture en tirant profit des avantages du Cloud (Cloud Native).

- Avantages : l'application est plus performante, plus sûre et revient à moins cher en phase de *Run*.
- Inconvénients : Complexité et coût de transformation

## Repuchasing ##

On remplace par des solutions SaaS, cette méthode ne concerne bien entendu que des produits disponibles sur étagère (CRM, CMS simples, etc...)

- Avantages : Simple et rapide si l'application  est peu customisé
- Inconvénients : peu d'options, risques potentiels au niveau de la sécurité/confidentialité

## Retain, Retire ##

Ces deux modèles sont un peu particulier, il s'agit soit de ne pas migrer l'application ou carrément de décommissionner celle ci, car la migration n'offre pas de plus-value.

# Développement #

## Cloud Native application ##

Pour tirer parti des avantages du Cloud computing, il faut repenser la manière de développer des applications en les adaptant à l'environnement dans lequel elles vont s’exécuter.
On parle d'application Cloud native.
Les piliers d'une application Cloud native sont :

* Automatisation (Infra-As-Code)
* Conteneurisation (Micro-services)
* Stockage externalisé (Object Storage, BDaaS)
* Observabilité (Monitor and logs)

<aside class="notes">

BDD / NoSQL / S3 / Bus /Caching
caching

</aside>

## Cloud Native application ##

Beaucoup de notions sont mises en oeuvre lors de la création d'un application Cloud Native, voici quelques définitions :

[Infra As Code](#/infraascode), [12 factors](#/factors) , [Stateless](#/stateless), [API](#/abstraction-api), [webservices](#/webservices), [Devops](#/devops),
[Object Storage](#/object-storage), [NoSQL](#/nosql), [Message Queue](#/messagequeue), [CDN](#/cdn)

# Mots clés #

## WebServices ##

Les **Service Web** désigne plusieurs chose mais principalement un concept d'API exposé sur le WEB utilisant une technologie d'échange, le plus souvent en mode **SOA** (Architecture orienté service) où des fonctions sont exécutées à distance.

Les API RESTful sont grandement utilisé dans le monde des Webservices. (HTTP + CRUD)

<aside class="notes">

</aside>

## Abstraction (api) ##

Une **API** (Application Programming Interface) Permet de faire abstraction de l'élément sur lequel elle se pose.
Elle décrit comment le consommateur peut utiliser les fonctions du fournisseur.
Dans le Cloud il est primordial que le maximum d'échanges se fassent au travers d'API pour garantir l’interopérabilité.

<aside class="notes">

</aside>

## StateLess ##

Se dit d'une application ou d'un service qui ne conserve pas en interne d'état d'une connexion d'un client entre 2 appels au service. Cela permet de faire traiter la demande par des machines différentes à chaque requête. C'est une des notions primordiale du développement d'application **Cloud-Ready**

<aside class="notes">

</aside>

## Interopérabilité ##

C'est la faculté qu'un système a de s'interfacer avec un autre sans le connaître. Interopérabilité est primordiale dans un environnement hétérogène. Ceci est notamment faisable grâce à la description complète des interfaces de ce système et à l'utilisation de format d'échanges normés ou standardisés.

<aside class="notes">

</aside>

## Multi-tenant ##

Un SI **multi-tenant** désigne une infrastructure qui partage ses ressources entre plusieurs clients. Chaque client ne doit pas avoir conscience que les autres existent.

<aside class="notes">

</aside>

## InfraAsCode ##

l'**Infrastructure As Code** désigne les technique permettant de définir une infrastructure par du code informatique (script, conf...). La mise en place de cette infrastructure est alors totalement automatisable et ré-instanciable à la demande. Ceci est possible lorsque tous les éléments de l'infrastructure ont été virtualisés.

- On entend souvent aussi parler de **gitOps**

<aside class="notes">

  GitOPs

</aside>


## Object Storage ##

Le stockage Objet permet une abstraction du stockage physique, les informations sont stockée sous forme d'Objet pouvant contenir n'importe quelle donnée, des métadonnées et accessible sans index (c'est un algorithme qui calcul à quel endroit se situe la donnée dans le cluster) via une API (S3 d'AWS par exemple).
Le cluster est composé d'éléments simples, peu coûteux, facilement extensible, avec une gestion logicielle.

<aside class="notes">

</aside>

## NOSQL ##

NoSQL regroupe un ensemble de type de SGBD, souvent adapté à des gros volumes ou a des traitements rapide, et par nature facilement scalable et résilient.

ex : MongoDB, Redis, Cassandra

<aside class="notes">

</aside>

## MessageQueue ##

Les architectures Cloud utilisent beaucoup la programmation par évènement et donc des agents de message (Message Broker) pour orchestrer ces messages, c'est le rôle d'une **Message Queue**

Ex: ActiveMQ, RabbitMQ, Kafka

<aside class="notes">

</aside>

## ServerLess ##

**ServerLess** désigne les services proposé en mode Cloud qui ne comprennent pas la livraison d'une machine pour réaliser l'opération, l'appel au service génère une mise à disposition de ressource en fonction de la charge nécessaire à l’exécution de la demande et la libère instantanément.

<aside class="notes">

</aside>

## autonomic computing ##

L'autonomic Computing désigne la capacité de ces systèmes de pouvoir se réparer eux même. Ils intègrent de la surveillance et de la détection d'anomalie.

<aside class="notes">

Lancé par IBM, l'autoréparation des programme intègre aujourd'hui de nombreux programmes

</aside>

## 12 factors ##

12 Factors désigne les règles pour concevoir des application Cloud Natives. Cas application ainsi développée s'intègrerons parfaitement dasn les univers Cloud en profitant u maximum des avantages de ce tupe d'hébergement.

- <https://12factor.net/fr/>

<aside class="notes">

</aside>

## Systèmes repartis ##

Un système réparti est un SI dans lequel l'information et l’exécution est distribuée sur un ensemble de nœuds constituant un Cluster. Cet ensemble peut être hétérogène et doit être scalable.

- ex: seti@home
- ex: cluster kubernetes

<aside class="notes">
   Encore parler IA , deep learning, grilles de caclul

</aside>

## High Availability ##

la **HA** désigne la capacité d'un système à *survivre* à la perte d'un élément de son infrastructure. Ceci en permettant l'utilisation d'une autre ressource de façon transparente pour l'utilisateur. On élimine ainsi les SPOF (*Single Point Of Failure*). Un **Load-balancer** permet la HA des services Web par exemple.

<aside class="notes">

</aside>

## PRA/PCA ##

- PRA  : Plan de reprise d'activité. Désigne le fait qu'il existe une solution pour reprendre l'activité d'un SI après un temps prévu (le plus court possible)
- PCA : Plan de continuité d'activité. Une solution existe pour continuer l'activité d'un service en cas de perte d'un élément constituant ce service (peut être un Datacenter tout entier, il faut donc alors basculer sur un autre Datacenter de façon transparente pour l’utilisateur).

<aside class="notes">

</aside>

## CDN ##

**Content Delivery Network** désigne un réseau synchronisé de serveurs permettant la diffusion de données au plus près de l'utilisateur (géographiquement parlant) afin de limiter l'effet de latence. Le CDN permet aussi de fournir un système de cache très efficace et proche de l'utilisateur.

<aside class="notes">

</aside>

## Open source ##

l'Open source qui consiste à ouvrir le code source d'une application à tous, est omniprésent dans les différents niveaux du Cloud computing. Même les plus grands fournisseurs utilisent des logiciels Open source, ils en sont souvent les principaux contributeurs.

<aside class="notes">

<https://www.openstack.org/foundation/companies/>

</aside>


## Devops ##

**Devops** désigne un courant de pensée informatique visant à éliminer le conflit entre les **Développeurs** qui souhaitent faire évoluer un SI et les **Opérationnels** qui souhaitent avoir un SI le plus Stable possible.

Il est née de l'utilisation de bout en bout des méthodes **Agiles**

<aside class="notes">

</aside>

## Devops ##{.figcenter}

![DEVOPS](img/devops-process.png)

<aside class="notes">

</aside>

## Devops ##

**Devops** est très à la mode, c'est une méthodologie très adaptée aux startups, l'évolution des outils mis à disposition permet de faire des **pipeline** de bout en bout sans connaissance de la complexité sous-jacente.

Mais on commence à voir les travers:

- complexité : **CloudArchitect**
- risques en sécurité : **DevSecOps**
- Augmentation des coûts cachés : **FinOps**

<aside class="notes">
  Devsecops finops
</aside>

# Enjeux - Avenir #

## Responsabilité ##

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
  - Localisation des centres de données (hors UE) et nationalité du fournisseur (EU, Patriot Act, Cloud Act)
- Audit fréquents à tous les niveaux
- Mise à jour régulière et systématique
- Chiffrement des flux
- Isolation des composants

<aside class="notes">

 Cloud Act : Clarifying Lawful Overseas Use of Data Act

</aside>

## Interopérabilité ##

- Facilité par les outils d'automatisation et l'utilisation massive de l'Open source
- Difficile au niveau des données

<aside class="notes">

</aside>

## Trafic réseau ##

Le **Cloud** et l'**IoT** sont très liés et ces deux éléments sont en très forte croissance. Cisco estime qu'en 2021, un habitant consommera à lui seul 200Gb de donnée par jour sur l'internet. 90% de ce trafic passera par le Cloud public et atteindra 3.3Zo (ZetaOctets), principalement pour la diffusion video
Traffic mondial des Datacenter :

- 2015 : 4.7Zo
- 2020 : 15.3Zo
  - 14% avec les utilisateurs
  - 9% entre Datacenters
  - 77% dans le Datacenter lui même

<aside class="notes">
15.3Zo = 213Milliard d'heures de music en streaming = 38 mois non-stop pour chaque habitant.

The Shift project

</aside>

# Do It Yourself #

## Introduction à Docker

Docker est en fait un ensemble d'outils de conteneurisation applicative.

- docker Engine
  - docker CLI
  - docker Daemon
- image
- conteneur
- registry
- volume
- stack

## Introduction à Docker

Scénario type :

- Je construis une image basé sur une image existante (OS ou app)
  - `docker build`
- Je sauve mon image dans un registry (facultatif)
  - `docker push`
- j'instancie un conteneur basé sur cette image
  - `docker run`

## TP comparaison ##

- Objectif : Comparer les différents types de virtualisation
  - system
  - stockage
  - réseau
- Prérequis :
  - compilateur c (gcc)
  - docker

## Comparaison systeme ##

> - compilation d'un code calculant les **n** nombres premiers

```
wget -O prime.c https://www.klgrth.io/paste/xhso2/raw
ou 
wget -O prime.c https://cedricici.github.io/cours-cloud/public/prime.c 
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

> - Dans un fichier **Dockerfile** on va construire notre image :
>
```
FROM debian
ADD ./prime /prime
CMD [ /prime 0 ]
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

> - Lancement via Un hyperviseur
> - Instanciez une image Ubuntu dans Virtualbox et répétez l'opération du premier exercice

## Comparaison systeme ##

> - Lancement dans un émulateur arm
>
```
sudo apt-get install qemu-system-arm
```
>
> - récupérez les fichiers nécéssaires sur [https://people.debian.org/~aurel32/qemu/armel/](https://people.debian.org/~aurel32/qemu/armel/)
> - lancer l'émulateur
>
```
qemu-system-arm -M versatilepb -kernel vmlinuz-3.2.0-4-versatile -initrd initrd.img-3.2.0-4-versatile -append "root=/dev/sda1" -hda debian_wheezy_armel_standard.qcow2
```

## Comparaison systeme ##

> - Vous allez devoir exécuter ces commandes pour réussir à compiler correctement. Passer votre clavier en azerty avec ces commandes, et mettez à jour les dépots **Debian**
> 
```
# dpkg-reconfigure keyboard-configuration
# service keyboard-setup restart 
# sed -i -e s/ftp.debian/archive.debian/g /etc/apt/sources.list
# apt-get update
```

`https://cedricici.github.io/cours-cloud/public/prime.c`{.note}

## Comparaison systeme ##

> - Les résultats en **arm32**

```
Calcul des 10000 premiers nombres premiers
real    0m36.174s
user    0m36.130s
sys     0m0.010s
```

## Comparaison systeme : Questions ##

`Question : Donnez vos premières conclusions sur ces résultats`{.note}

`Question : expliquez les différences entre les durées real, user et sys`{.note}

`Question : pourquoi le temps user dans Docker est-il si petit? est-ce normal?`{.note}

`Question : Donnez une solution pour obtenir le temps user effectif dans le conteneur`{.note}

## TP Saas ##

**Objectif** : déployer une application Saas

Connectez vous sur le site Wordpress.com. c'est un service de SaaS basé sur le CMS(Content Managment System) Open source Wordpress, disponible sur le site wordpress.org

> - Laissez vous guider dans la création de votre site.
Vous pouvez ensuite faire des modifications sommaires sur la page d'accueil.
> - publiez votre site (ajoutez du contenu, des média et au minimum un widget)
> - repassez par l'édition pour voir le back-office complet.

## TP Saas ##

Instanciez vous même le CMS Wordpress

> - télécharger le logiciel sur le site wordpress.org ou l'image docker sur le dockerhub (<https://hub.docker.com/_/wordpress>)
> - configurez votre serveur Web Local ou le docker-compose proposé dans la doc
> - démarrez votre instance local de Wordpress

## TP Saas  : Questions ##

`Question : D'après vous, quelle différence peut-on noter entre le logiciel Wordpress et le service de Saas Wordpress.com`{.note}

`Question : Quels éléments (vu dans le cours) faudrait-il mettre en place pour proposer notre propre service de Saas basé sur Wordpress?`{.note}

`Question : Proposez une architecture pour rendre ce service`{.note}

## TP Paas ##

**Objectif** : déployer une appli Paas

L'objectif ici est de déployer une application à partir d'un code source.

> - Connectez vous sur la plateforme Paas Heroku.com et créez un compte
> - Suivez le [tutoriel Heroku](https://devcenter.heroku.com/start) pour créer une application node.js

<aside class="notes">

 alternative = render.com  car Heroku devient payant

</aside>

## TP Paas  : Questions ##

`Question : Une fois le tutoriel de base réalisé. Trouvez une solution pour déployer le code suivant (ou celui de votre choix) dans une nouvelle application **sans utiliser l'outil CLI heroku-toolbelt** .`{.note}

`Question : Donnez une explication des technologies qui selon vous sont misent en œuvre ici.`{.note}

> [https://github.com/cedricici/findmefast.git](https://github.com/cedricici/findmefast.git)

## TP Architecture ##

**Objectif** : Comprendre une architecture cloud

Je vous propose de réaliser un serveur de données cartographiques Raster basé sur **Rok4** et son site de visualisation de donnée, vous aurez besoin de ces ressources :

> - un serveur nginx pour publier une interface de visualisation
> - un serveur rok4 pour diffuser des tuiles au standard WMTS
> - des données

## TP Architecture ##

Le résultat à atteindre est visualisable à l'aide d'un ensemble de conteneur Docker que nous avons préparés pour cette démo :

[https://github.com/rok4/rok4/tree/master/docker](https://github.com/rok4/rok4/tree/master/docker)

Suivez le tutoriel Github pour lancer la stack Docker ci dessus.
Vous aurez besoin de Docker et de docker-compose

## TP Architecture ####

Après avoir réussi à instancier cette structure avec succès, j'attends de vous que vous me fassiez le schéma d'architecture niveau IAAS de cette pile applicative.Vous procéderez par instrospection en analysant le contenu des images *Docker* utilisées.

Votre schéma devra contenir :

> - les noeuds, leur rôle et leur scalabilité potentielle
> - les liens entre les noeuds
> - les flux et les ports réseaux utilisés
> - les stockages (types et montages)
> - les logiciels utilisés

## TP Architecture : Questions ####

Vous pouvez utiliser [https://app.diagrams.net/](https://app.diagrams.net/) pour votre schéma par exemple.

`Question : Fournissez un schéma d'architecture complet représentant cette pile applicative`{.note}

## TP Iaas/Kaas ##

Ceux qui sont aventuriers peuvent se lancer dans la construction de cette Stack au sein d'un cluster Kubernetes (via minikube) :

Installation minikube en utilisant Docker comme driver :

[https://minikube.sigs.k8s.io/docs/start/](https://minikube.sigs.k8s.io/docs/start/)

On se trouve donc à simuler un cluster d'orchestration de conteneur Dont les noeuds sont des... conteneurs !

## TP : TRAVAIL ATTENDU ##

`Rendez moi au format Markdown + schema (.drawio) par mail à cedric.esnault@ign.fr,  un compte rendu de ces TP avec les différentes étapes de vos recherches. N'hésitez pas à noter les points durs .`{.note}
