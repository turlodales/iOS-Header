//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPCPlayerPath, MPCPlayerResponse;

@interface _MPCPlayerCommand : NSObject
{
    MPCPlayerResponse *_response;
    MPCPlayerPath *_playerPath;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) MPCPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) MPCPlayerResponse *response; // @synthesize response=_response;
- (id)initWithPlayerPath:(id)arg1;
- (id)initWithResponse:(id)arg1;

@end

