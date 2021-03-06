//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface HFControlItemCharacteristicOptions : NSObject <NAIdentifiable>
{
    NSDictionary *_characteristicTypesByUsage;
}

+ (id)na_identity;
+ (id)optionsWithReadWriteCharacteristicTypes:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *characteristicTypesByUsage; // @synthesize characteristicTypesByUsage=_characteristicTypesByUsage;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)_optionsByReducingWithOptions:(id)arg1 reducer:(CDUnknownBlockType)arg2;
- (id)optionsByIntersectingWithOptions:(id)arg1;
- (id)optionsByAddingCharacteristicOptions:(id)arg1;
- (id)optionsByAddingCharacteristicTypes:(id)arg1 forUsage:(unsigned long long)arg2;
- (id)characteristicTypesForUsage:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)_characteristicTypesForUsagesPassingTest:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSSet *allRequiredCharacteristicTypes;
@property(readonly, copy, nonatomic) NSSet *allCharacteristicTypes;
- (id)initWithCharacteristicTypesByUsage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

