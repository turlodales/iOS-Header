//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNTrafficIncidentAlert.h>

#import "CarTrafficAlertViewDataSource-Protocol.h"

@class NSString;

@interface MNTrafficIncidentAlert (CarTrafficAlertView) <CarTrafficAlertViewDataSource>
@property(readonly) NSString *cancelString;
@property(readonly) NSString *acceptString;
@property(readonly) NSString *secondaryString;
@property(readonly) NSString *primaryString;
- (id)alternateRouteToDisplay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

