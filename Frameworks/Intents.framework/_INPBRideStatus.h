/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRideStatus : PBCodable <NSCopying> {
    NSMutableArray * _additionalActionItems;
    _INPBRideCompletionStatus * _completionStatus;
    _INPBRideDriver * _driver;
    _INPBLocationValue * _dropOffLocation;
    _INPBTimestamp * _estimatedDropOffDate;
    _INPBTimestamp * _estimatedPickupDate;
    _INPBTimestamp * _estimatedPickupEndDate;
    struct { 
        unsigned int phase : 1; 
    }  _has;
    int  _phase;
    _INPBLocationValue * _pickupLocation;
    NSString * _rideIdentifier;
    _INPBRideOption * _rideOption;
    PBUnknownFields * _unknownFields;
    _INPBUserActivity * _userActivityForCancelingInApplication;
    _INPBRideVehicle * _vehicle;
    NSMutableArray * _waypoints;
}

@property (nonatomic, retain) NSMutableArray *additionalActionItems;
@property (nonatomic, retain) _INPBRideCompletionStatus *completionStatus;
@property (nonatomic, retain) _INPBRideDriver *driver;
@property (nonatomic, retain) _INPBLocationValue *dropOffLocation;
@property (nonatomic, retain) _INPBTimestamp *estimatedDropOffDate;
@property (nonatomic, retain) _INPBTimestamp *estimatedPickupDate;
@property (nonatomic, retain) _INPBTimestamp *estimatedPickupEndDate;
@property (nonatomic, readonly) bool hasCompletionStatus;
@property (nonatomic, readonly) bool hasDriver;
@property (nonatomic, readonly) bool hasDropOffLocation;
@property (nonatomic, readonly) bool hasEstimatedDropOffDate;
@property (nonatomic, readonly) bool hasEstimatedPickupDate;
@property (nonatomic, readonly) bool hasEstimatedPickupEndDate;
@property (nonatomic) bool hasPhase;
@property (nonatomic, readonly) bool hasPickupLocation;
@property (nonatomic, readonly) bool hasRideIdentifier;
@property (nonatomic, readonly) bool hasRideOption;
@property (nonatomic, readonly) bool hasUserActivityForCancelingInApplication;
@property (nonatomic, readonly) bool hasVehicle;
@property (nonatomic) int phase;
@property (nonatomic, retain) _INPBLocationValue *pickupLocation;
@property (nonatomic, retain) NSString *rideIdentifier;
@property (nonatomic, retain) _INPBRideOption *rideOption;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBUserActivity *userActivityForCancelingInApplication;
@property (nonatomic, retain) _INPBRideVehicle *vehicle;
@property (nonatomic, retain) NSMutableArray *waypoints;

+ (Class)additionalActionItemsType;
+ (id)options;
+ (Class)waypointsType;

- (void).cxx_destruct;
- (void)addAdditionalActionItems:(id)arg1;
- (void)addWaypoints:(id)arg1;
- (id)additionalActionItems;
- (id)additionalActionItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)additionalActionItemsCount;
- (void)clearAdditionalActionItems;
- (void)clearWaypoints;
- (id)completionStatus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)driver;
- (id)dropOffLocation;
- (id)estimatedDropOffDate;
- (id)estimatedPickupDate;
- (id)estimatedPickupEndDate;
- (bool)hasCompletionStatus;
- (bool)hasDriver;
- (bool)hasDropOffLocation;
- (bool)hasEstimatedDropOffDate;
- (bool)hasEstimatedPickupDate;
- (bool)hasEstimatedPickupEndDate;
- (bool)hasPhase;
- (bool)hasPickupLocation;
- (bool)hasRideIdentifier;
- (bool)hasRideOption;
- (bool)hasUserActivityForCancelingInApplication;
- (bool)hasVehicle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)phase;
- (id)pickupLocation;
- (bool)readFrom:(id)arg1;
- (id)rideIdentifier;
- (id)rideOption;
- (void)setAdditionalActionItems:(id)arg1;
- (void)setCompletionStatus:(id)arg1;
- (void)setDriver:(id)arg1;
- (void)setDropOffLocation:(id)arg1;
- (void)setEstimatedDropOffDate:(id)arg1;
- (void)setEstimatedPickupDate:(id)arg1;
- (void)setEstimatedPickupEndDate:(id)arg1;
- (void)setHasPhase:(bool)arg1;
- (void)setPhase:(int)arg1;
- (void)setPickupLocation:(id)arg1;
- (void)setRideIdentifier:(id)arg1;
- (void)setRideOption:(id)arg1;
- (void)setUserActivityForCancelingInApplication:(id)arg1;
- (void)setVehicle:(id)arg1;
- (void)setWaypoints:(id)arg1;
- (id)unknownFields;
- (id)userActivityForCancelingInApplication;
- (id)vehicle;
- (id)waypoints;
- (id)waypointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)waypointsCount;
- (void)writeTo:(id)arg1;

@end
