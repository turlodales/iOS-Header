//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFSetAirPlayRouteRequest : DMFTaskRequest
{
    _Bool _suppressPasscodePrompt;
    NSString *_routeUID;
    NSString *_password;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool suppressPasscodePrompt; // @synthesize suppressPasscodePrompt=_suppressPasscodePrompt;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

