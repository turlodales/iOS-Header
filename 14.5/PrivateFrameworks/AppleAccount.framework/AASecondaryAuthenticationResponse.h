//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSData, NSString;

@interface AASecondaryAuthenticationResponse : AAResponse
{
    NSString *_secondFactorToken;
    NSData *_buddyML;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *buddyML; // @synthesize buddyML=_buddyML;
@property(readonly, nonatomic) NSString *secondFactorToken; // @synthesize secondFactorToken=_secondFactorToken;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

