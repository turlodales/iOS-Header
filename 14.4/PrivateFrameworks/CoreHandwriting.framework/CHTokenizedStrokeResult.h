//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface CHTokenizedStrokeResult : NSObject
{
    long long _resultLevel;
    NSSet *_strokeIdentifiers;
}

@property(readonly, copy, nonatomic) NSSet *strokeIdentifiers; // @synthesize strokeIdentifiers=_strokeIdentifiers;
@property(readonly, nonatomic) long long resultLevel; // @synthesize resultLevel=_resultLevel;
- (void)dealloc;
- (id)initWithStrokeIdentifiers:(id)arg1 resultLevel:(long long)arg2;

@end

