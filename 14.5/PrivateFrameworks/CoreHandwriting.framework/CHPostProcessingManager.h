//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CHPostProcessingManager : NSObject
{
    NSArray *_sequence;
}

@property(retain, nonatomic) NSArray *sequence; // @synthesize sequence=_sequence;
- (void)dealloc;
- (id)process:(id)arg1;
- (id)initWithSequence:(id)arg1;
- (id)initWithStep:(id)arg1;
- (id)init;

@end

