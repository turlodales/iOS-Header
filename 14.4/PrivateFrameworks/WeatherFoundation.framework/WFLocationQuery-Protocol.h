//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/NSObject-Protocol.h>

@class WFResponse, WFTaskIdentifier;

@protocol WFLocationQuery <NSObject>
@property(retain) WFTaskIdentifier *identifier;
@property(readonly) WFResponse *response;
- (void)start;
@end

