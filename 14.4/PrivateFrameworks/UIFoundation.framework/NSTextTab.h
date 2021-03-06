//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCoding-Protocol.h>
#import <UIFoundation/NSCopying-Protocol.h>
#import <UIFoundation/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface NSTextTab : NSObject <NSCopying, NSCoding, NSSecureCoding>
{
    struct {
        unsigned int alignment:4;
        unsigned int refCount:24;
        unsigned int unused:4;
    } _flags;
    double _location;
    id _reserved;
}

+ (_Bool)supportsSecureCoding;
+ (id)columnTerminatorsForLocale:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)tabStopType;
@property(readonly, nonatomic) double location;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (oneway void)release;
- (void)dealloc;
@property(readonly, nonatomic) NSDictionary *options;
@property(readonly, nonatomic) long long alignment;
- (id)init;
- (id)initWithTextAlignment:(long long)arg1 location:(double)arg2 options:(id)arg3;
- (id)initWithType:(unsigned long long)arg1 location:(double)arg2;

@end

