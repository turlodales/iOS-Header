//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEODirectionsFeedback, GEODirectionsFeedbackLogMessage, GEOLatLng, NSArray, NSMutableArray, NSNumber, NSString;

@interface GEODirectionsFeedbackCollector : NSObject
{
    GEODirectionsFeedback *_currentDirectionsFeedback;
    GEODirectionsFeedbackLogMessage *_currentFeedbackLogMessage;
    double _currentDirectionsModeStartTime;
    NSMutableArray *_navigationModes;
    double _originalExpectedTime;
    GEOLatLng *_tripOrigin;
    _Bool _wasEverConnectedToCarplay;
    _Bool _hasEnteredPreArrivalMode;
    _Bool _isVLFImprovementUsed;
    _Bool _batteryDied;
    _Bool _chargingStopAdded;
    _Bool _isCoarseLocationUsed;
    _Bool _isEVRoute;
    _Bool _isBadEvExperience;
    NSNumber *_stateOfChargeAtOrigin;
    NSNumber *_stateOfChargeAtDestPredicted;
    NSNumber *_stateOfChargeAtDestActual;
    NSArray *_waypoints;
    NSString *_evConsumptionModel;
    NSString *_evChargingModel;
    int _transportType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *evChargingModel; // @synthesize evChargingModel=_evChargingModel;
@property(retain, nonatomic) NSString *evConsumptionModel; // @synthesize evConsumptionModel=_evConsumptionModel;
@property(retain, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;
@property(retain, nonatomic) NSNumber *stateOfChargeAtDestActual; // @synthesize stateOfChargeAtDestActual=_stateOfChargeAtDestActual;
@property(retain, nonatomic) NSNumber *stateOfChargeAtDestPredicted; // @synthesize stateOfChargeAtDestPredicted=_stateOfChargeAtDestPredicted;
@property(retain, nonatomic) NSNumber *stateOfChargeAtOrigin; // @synthesize stateOfChargeAtOrigin=_stateOfChargeAtOrigin;
@property(nonatomic) _Bool isBadEvExperience; // @synthesize isBadEvExperience=_isBadEvExperience;
@property(nonatomic) _Bool isEVRoute; // @synthesize isEVRoute=_isEVRoute;
@property(nonatomic) _Bool batteryDied; // @synthesize batteryDied=_batteryDied;
@property(retain, nonatomic) GEODirectionsFeedback *currentDirectionsFeedback; // @synthesize currentDirectionsFeedback=_currentDirectionsFeedback;
@property(retain, nonatomic) GEODirectionsFeedbackLogMessage *currentFeedbackLogMessage; // @synthesize currentFeedbackLogMessage=_currentFeedbackLogMessage;
- (id)description;
- (void)endFeedbackSessionWithTracePath:(id)arg1;
- (void)setIsCoarseLocationUsed:(_Bool)arg1;
- (void)changeNavigationType:(int)arg1;
- (void)setChargingStopAdded:(_Bool)arg1;
- (void)setIsVLFImprovementUsed:(_Bool)arg1;
- (void)setModalities:(id)arg1;
- (void)setAudioFeedback:(struct GEONavigationAudioFeedback *)arg1;
- (void)addAlightNotificationFeedback:(id)arg1;
- (void)setHasEnteredPreArrivalMode:(_Bool)arg1;
- (void)setFinalLocation:(id)arg1 asArrival:(_Bool)arg2;
- (void)addTrafficRerouteFeedback:(id)arg1;
- (void)addRouteID:(id)arg1 routeIndex:(unsigned int)arg2 stepID:(unsigned int)arg3 completeStep:(_Bool)arg4;
- (void)addStepFeedback:(id)arg1;
- (void)addGuidanceEventFeedback:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setWasEverConnectedToCarplay:(_Bool)arg1;
- (void)setTripOrigin:(id)arg1;
- (void)setOriginalExpectedTime:(double)arg1;
- (void)setupFeedbackSessionWithResponseID:(id)arg1;
- (void)startFeedbackSessionForResponseID:(id)arg1 withNavigationType:(int)arg2;
- (void)_updateFeedbackSessionWithResponseID:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

