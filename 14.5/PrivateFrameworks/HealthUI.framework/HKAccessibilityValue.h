//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface HKAccessibilityValue : NSObject
{
    NSString *_valueTitle;
    NSString *_valueType;
    NSString *_valueDescription;
    NSNumber *_valueAsNumber;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *valueAsNumber; // @synthesize valueAsNumber=_valueAsNumber;
@property(readonly, nonatomic) NSString *valueDescription; // @synthesize valueDescription=_valueDescription;
@property(readonly, nonatomic) NSString *valueType; // @synthesize valueType=_valueType;
@property(readonly, nonatomic) NSString *valueTitle; // @synthesize valueTitle=_valueTitle;
- (id)description;
- (id)initWithValueTitle:(id)arg1 valueType:(id)arg2 valueDescription:(id)arg3 valueAsNumber:(id)arg4;

@end

