//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSLayoutRule-Protocol.h>

@class NSLayoutAnchor, NSString;

@interface NSLayoutAnchorRule : NSObject <NSLayoutRule>
{
    NSLayoutAnchor *_firstAnchor;
    NSLayoutAnchor *_secondAnchor;
    long long _relation;
    NSString *_identifier;
    double _constant;
    double _multiplier;
    float _priority;
}

@property(readonly) double multiplier; // @synthesize multiplier=_multiplier;
@property(readonly) float priority; // @synthesize priority=_priority;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) double constant; // @synthesize constant=_constant;
@property(readonly) long long relation; // @synthesize relation=_relation;
@property(readonly, copy) NSLayoutAnchor *secondAnchor; // @synthesize secondAnchor=_secondAnchor;
@property(readonly, copy) NSLayoutAnchor *firstAnchor; // @synthesize firstAnchor=_firstAnchor;
@property(readonly, copy) NSString *ruleDescription;
@property(readonly, copy) NSString *description;
- (id)makeChildRules;
- (id)makeLayoutConstraint;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithFirstAnchor:(id)arg1 secondAnchor:(id)arg2 relation:(long long)arg3 multiplier:(double)arg4 constant:(double)arg5 priority:(float)arg6 identifier:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

