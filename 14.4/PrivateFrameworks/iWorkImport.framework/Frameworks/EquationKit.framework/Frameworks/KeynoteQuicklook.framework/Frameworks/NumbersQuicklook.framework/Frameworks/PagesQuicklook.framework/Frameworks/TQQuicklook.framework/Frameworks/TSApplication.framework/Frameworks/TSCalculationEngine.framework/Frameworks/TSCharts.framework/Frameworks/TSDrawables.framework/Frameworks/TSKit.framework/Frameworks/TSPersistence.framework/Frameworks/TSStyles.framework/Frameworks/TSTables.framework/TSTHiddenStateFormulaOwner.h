//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class NSArray;

@interface TSTHiddenStateFormulaOwner : TSPObject
{
    UUIDData_5fbc143e _ownerUID;
    NSArray *_thresholdCellValues;
    _Bool _needsToUpdateFilterSetForImport;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *thresholdCellValues; // @synthesize thresholdCellValues=_thresholdCellValues;
@property(nonatomic) _Bool needsToUpdateFilterSetForImport; // @synthesize needsToUpdateFilterSetForImport=_needsToUpdateFilterSetForImport;
@property(nonatomic) UUIDData_5fbc143e ownerUID; // @synthesize ownerUID=_ownerUID;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

