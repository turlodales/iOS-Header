//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayoutBlueprintFactory-Protocol.h>

@class NSString;
@protocol SXComponentBlueprintFactory, SXUnitConverterFactory;

@interface SXLayoutBlueprintFactory : NSObject <SXLayoutBlueprintFactory>
{
    id <SXComponentBlueprintFactory> _componentBlueprintFactory;
    id <SXUnitConverterFactory> _unitConverterFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SXUnitConverterFactory> unitConverterFactory; // @synthesize unitConverterFactory=_unitConverterFactory;
@property(readonly, nonatomic) id <SXComponentBlueprintFactory> componentBlueprintFactory; // @synthesize componentBlueprintFactory=_componentBlueprintFactory;
- (id)createLayoutBlueprintWithLayoutOptions:(id)arg1;
- (id)initWithComponentBlueprintFactory:(id)arg1 unitConverterFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

