//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSString;

@interface TSUDurationFormatter : NSFormatter
{
    NSString *mFormat;
    int mCompactStyleStartUnit;
}

@property(nonatomic) int compactStyleStartUnit; // @synthesize compactStyleStartUnit=mCompactStyleStartUnit;
@property(copy, nonatomic) NSString *format; // @synthesize format=mFormat;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (void)dealloc;
- (void)p_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

