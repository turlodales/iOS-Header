//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray, NSString;
@protocol MTVisualStyleSetProviding;

@interface MTCoreMaterialVisualStylingProvider : NSObject
{
    id <MTVisualStyleSetProviding> _visualStyleSet;
    NSPointerArray *_observers;
}

+ (_Bool)canGenerateVisualStyleSetFromRecipe:(id)arg1;
+ (id)coreMaterialVisualStylingProviderForStyleSetNamed:(id)arg1 inBundle:(id)arg2;
+ (id)coreMaterialVisualStylingProviderForRecipe:(id)arg1 andCategory:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic, getter=_observers) NSPointerArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic, getter=_visualStyleSet, setter=_setVisualStyleSet:) id <MTVisualStyleSetProviding> visualStyleSet; // @synthesize visualStyleSet=_visualStyleSet;
- (id)description;
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)visualStylingForStyle:(id)arg1;
- (_Bool)updateVisualStyleSetGeneratedFromRecipe:(id)arg1;
- (_Bool)updateVisualStyleSetFromRecipe:(id)arg1 andCategory:(id)arg2;
@property(readonly, copy, nonatomic) NSString *visualStyleSetName;

@end

