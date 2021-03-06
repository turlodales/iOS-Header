//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSMutableArray, NSString, PBDataReader;

@interface LOGMSGEVENTLogMsgEventRideBookingSession : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOLatLng *_destinationBlurred;
    double _distanceToPickupInMeters;
    double _durationOfSessionInSeconds;
    NSMutableArray *_errorMessages;
    NSMutableArray *_intentResponseFailures;
    GEOLatLng *_originBlurred;
    NSString *_rideAppId;
    NSString *_rideAppVersion;
    NSString *_rideBookingSessionId;
    NSString *_rideType;
    long long _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _endState;
    int _endView;
    unsigned int _numberOfAvailableExtensions;
    int _statusIssue;
    _Bool _comparedRideOptions;
    _Bool _exploredOtherOptions;
    _Bool _installedApp;
    _Bool _movedPickupLocation;
    _Bool _paymentIsApplePay;
    _Bool _showedSurgePricingAlert;
    _Bool _switchedApp;
    _Bool _unavailable;
    struct {
        unsigned int has_distanceToPickupInMeters:1;
        unsigned int has_durationOfSessionInSeconds:1;
        unsigned int has_timestamp:1;
        unsigned int has_endState:1;
        unsigned int has_endView:1;
        unsigned int has_numberOfAvailableExtensions:1;
        unsigned int has_statusIssue:1;
        unsigned int has_comparedRideOptions:1;
        unsigned int has_exploredOtherOptions:1;
        unsigned int has_installedApp:1;
        unsigned int has_movedPickupLocation:1;
        unsigned int has_paymentIsApplePay:1;
        unsigned int has_showedSurgePricingAlert:1;
        unsigned int has_switchedApp:1;
        unsigned int has_unavailable:1;
        unsigned int read_destinationBlurred:1;
        unsigned int read_errorMessages:1;
        unsigned int read_intentResponseFailures:1;
        unsigned int read_originBlurred:1;
        unsigned int read_rideAppId:1;
        unsigned int read_rideAppVersion:1;
        unsigned int read_rideBookingSessionId:1;
        unsigned int read_rideType:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)intentResponseFailureType;
+ (Class)errorMessageType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)intentResponseFailureAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentResponseFailuresCount;
- (void)addIntentResponseFailure:(id)arg1;
- (void)clearIntentResponseFailures;
@property(retain, nonatomic) NSMutableArray *intentResponseFailures;
- (int)StringAsStatusIssue:(id)arg1;
- (id)statusIssueAsString:(int)arg1;
@property(nonatomic) _Bool hasStatusIssue;
@property(nonatomic) int statusIssue;
@property(nonatomic) _Bool hasComparedRideOptions;
@property(nonatomic) _Bool comparedRideOptions;
@property(retain, nonatomic) NSString *rideAppVersion;
@property(readonly, nonatomic) _Bool hasRideAppVersion;
- (id)errorMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)errorMessagesCount;
- (void)addErrorMessage:(id)arg1;
- (void)clearErrorMessages;
@property(retain, nonatomic) NSMutableArray *errorMessages;
@property(nonatomic) _Bool hasMovedPickupLocation;
@property(nonatomic) _Bool movedPickupLocation;
@property(nonatomic) _Bool hasUnavailable;
@property(nonatomic) _Bool unavailable;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) long long timestamp;
@property(nonatomic) _Bool hasInstalledApp;
@property(nonatomic) _Bool installedApp;
@property(nonatomic) _Bool hasDurationOfSessionInSeconds;
@property(nonatomic) double durationOfSessionInSeconds;
@property(nonatomic) _Bool hasShowedSurgePricingAlert;
@property(nonatomic) _Bool showedSurgePricingAlert;
@property(nonatomic) _Bool hasSwitchedApp;
@property(nonatomic) _Bool switchedApp;
@property(nonatomic) _Bool hasNumberOfAvailableExtensions;
@property(nonatomic) unsigned int numberOfAvailableExtensions;
@property(nonatomic) _Bool hasPaymentIsApplePay;
@property(nonatomic) _Bool paymentIsApplePay;
@property(nonatomic) _Bool hasDistanceToPickupInMeters;
@property(nonatomic) double distanceToPickupInMeters;
@property(retain, nonatomic) NSString *rideType;
@property(readonly, nonatomic) _Bool hasRideType;
@property(nonatomic) _Bool hasExploredOtherOptions;
@property(nonatomic) _Bool exploredOtherOptions;
@property(retain, nonatomic) GEOLatLng *destinationBlurred;
@property(readonly, nonatomic) _Bool hasDestinationBlurred;
@property(retain, nonatomic) GEOLatLng *originBlurred;
@property(readonly, nonatomic) _Bool hasOriginBlurred;
@property(retain, nonatomic) NSString *rideAppId;
@property(readonly, nonatomic) _Bool hasRideAppId;
- (int)StringAsEndView:(id)arg1;
- (id)endViewAsString:(int)arg1;
@property(nonatomic) _Bool hasEndView;
@property(nonatomic) int endView;
- (int)StringAsEndState:(id)arg1;
- (id)endStateAsString:(int)arg1;
@property(nonatomic) _Bool hasEndState;
@property(nonatomic) int endState;
@property(retain, nonatomic) NSString *rideBookingSessionId;
@property(readonly, nonatomic) _Bool hasRideBookingSessionId;
- (id)initWithData:(id)arg1;
- (id)init;

@end

