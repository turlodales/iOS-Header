//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, TSTCellRegion;

@interface TSTChangeDescriptor : NSObject
{
    int mChangeDescriptor;
    TSTCellRegion *mCellRegion;
    CDStruct_0441cfb5 mCellID;
    TSTCellRegion *mExpandedRegion;
    TSTCellRegion *mStrokeRegion;
    NSHashTable *mReferenceIdentifiers;
}

+ (id)changeDescriptorWithType:(int)arg1 referenceIdentifiers:(id)arg2;
+ (id)changeDescriptorWithType:(int)arg1 cellRange:(CDStruct_5f1f7aa9)arg2 strokeRange:(CDStruct_5f1f7aa9)arg3;
+ (id)changeDescriptorWithType:(int)arg1 strokeRange:(CDStruct_5f1f7aa9)arg2;
+ (id)changeDescriptorWithType:(int)arg1 cellRange:(CDStruct_5f1f7aa9)arg2;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(CDStruct_0441cfb5)arg2 strokeRange:(CDStruct_5f1f7aa9)arg3;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(CDStruct_0441cfb5)arg2 cellRange:(CDStruct_5f1f7aa9)arg3 strokeRange:(CDStruct_5f1f7aa9)arg4;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(CDStruct_0441cfb5)arg2 cellRange:(CDStruct_5f1f7aa9)arg3;
+ (id)changeDescriptorWithType:(int)arg1;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(CDStruct_0441cfb5)arg2 cellRegion:(id)arg3 strokeRegion:(id)arg4;
+ (id)changeDescriptorWithType:(int)arg1 strokeRegion:(id)arg2;
+ (id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2 strokeRegion:(id)arg3;
+ (id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2;
@property(readonly, nonatomic) NSHashTable *referenceIdentifiers; // @synthesize referenceIdentifiers=mReferenceIdentifiers;
@property(retain, nonatomic) TSTCellRegion *expandedRegion; // @synthesize expandedRegion=mExpandedRegion;
@property(readonly, nonatomic) TSTCellRegion *strokeRegion; // @synthesize strokeRegion=mStrokeRegion;
@property(readonly, nonatomic) CDStruct_0441cfb5 cellID; // @synthesize cellID=mCellID;
@property(readonly, nonatomic) TSTCellRegion *cellRegion; // @synthesize cellRegion=mCellRegion;
@property(readonly, nonatomic) int changeDescriptor; // @synthesize changeDescriptor=mChangeDescriptor;
- (id)description;
- (CDStruct_5f1f7aa9)cellRange;
- (CDStruct_5f1f7aa9)expandedRange;
- (void)setExpandedRange:(CDStruct_5f1f7aa9)arg1;
- (CDStruct_5f1f7aa9)strokeRange;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithChangeDescriptorType:(int)arg1 andCellRegion:(id)arg2 andCellID:(CDStruct_0441cfb5)arg3 andStrokeRegion:(id)arg4 andReferenceIdentifiers:(id)arg5;

@end

