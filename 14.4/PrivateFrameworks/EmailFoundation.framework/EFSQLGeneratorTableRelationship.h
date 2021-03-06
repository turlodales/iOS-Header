//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/NSCopying-Protocol.h>

@class EFSQLColumnSchema, EFSQLTableSchema;

@interface EFSQLGeneratorTableRelationship : NSObject <NSCopying>
{
    EFSQLTableSchema *_table;
    EFSQLColumnSchema *_sourceColumn;
    EFSQLTableSchema *_targetTable;
    unsigned long long _relationship;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long relationship; // @synthesize relationship=_relationship;
@property(readonly, nonatomic) EFSQLTableSchema *targetTable; // @synthesize targetTable=_targetTable;
@property(readonly, nonatomic) EFSQLColumnSchema *sourceColumn; // @synthesize sourceColumn=_sourceColumn;
@property(readonly, nonatomic) EFSQLTableSchema *table; // @synthesize table=_table;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTableRelationship:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPropertyMapper:(id)arg1 previousTable:(id)arg2;

@end

