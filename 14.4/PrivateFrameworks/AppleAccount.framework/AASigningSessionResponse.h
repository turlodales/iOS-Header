//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSData;

@interface AASigningSessionResponse : AAResponse
{
    NSData *_sessionData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *sessionData; // @synthesize sessionData=_sessionData;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

