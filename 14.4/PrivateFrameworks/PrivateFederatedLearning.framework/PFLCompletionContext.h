//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError;

@interface PFLCompletionContext : NSObject
{
    NSError *_error;
    NSData *_privatizedDiffs;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *privatizedDiffs; // @synthesize privatizedDiffs=_privatizedDiffs;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithPrivatizedDiffs:(id)arg1 error:(id)arg2;

@end

