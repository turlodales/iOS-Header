//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/MCTouchInput.h>

@class NSArray;

@interface MCDrawableTouchInput : MCTouchInput
{
    _Bool _isInflectionPoint;
    NSArray *_nearbyKeys;
    RefPtr_48eecea7 _touchHistory;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) RefPtr_48eecea7 touchHistory; // @synthesize touchHistory=_touchHistory;
@property(readonly, nonatomic) NSArray *nearbyKeys; // @synthesize nearbyKeys=_nearbyKeys;
@property(readonly, nonatomic) _Bool isInflectionPoint; // @synthesize isInflectionPoint=_isInflectionPoint;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTouchPoint:(struct CGPoint)arg1 radius:(double)arg2 timestamp:(double)arg3 inflectionPoint:(_Bool)arg4 touchHistory:(const RefPtr_48eecea7 *)arg5;
- (id)initWithTouchPoint:(struct CGPoint)arg1 radius:(double)arg2 timestamp:(double)arg3;

@end

