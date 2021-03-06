//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSKit/TSKSelection.h>

@interface TNFormViewerSelection : TSKSelection
{
    unsigned short _fieldIndex;
    unsigned int _recordIndex;
}

+ (id)selectionForRecordIndex:(unsigned int)arg1 fieldIndex:(unsigned short)arg2;
+ (id)selectionForRecordIndex:(unsigned int)arg1;
+ (id)selection;
+ (Class)archivedSelectionClass;
@property(readonly, nonatomic) unsigned short fieldIndex; // @synthesize fieldIndex=_fieldIndex;
@property(readonly, nonatomic) unsigned int recordIndex; // @synthesize recordIndex=_recordIndex;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecordIndex:(unsigned int)arg1 fieldIndex:(unsigned short)arg2;

@end

