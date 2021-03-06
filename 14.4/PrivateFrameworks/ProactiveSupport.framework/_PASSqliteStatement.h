//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveSupport/NSCopying-Protocol.h>

@class _PASSQLColumnMapping, _PASSqliteDatabase;

@interface _PASSqliteStatement : NSObject <NSCopying>
{
    _PASSqliteDatabase *_owner;
    _PASSQLColumnMapping *_columnMapping;
    struct sqlite3_stmt *_stmt;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct sqlite3_stmt *stmt; // @synthesize stmt=_stmt;
- (_Bool)isColumnNull:(int)arg1;
- (_Bool)isNullForColumnAlias:(const char *)arg1;
- (id)getDoubleAsNSNumberForColumnAlias:(const char *)arg1;
- (double)getDoubleForColumnAlias:(const char *)arg1;
- (id)getInt64AsNSNumberForColumnAlias:(const char *)arg1;
- (long long)getInt64ForColumnAlias:(const char *)arg1;
- (long long)getIntegerForColumnAlias:(const char *)arg1;
- (id)getNSDataForColumnAlias:(const char *)arg1;
- (id)getNSStringForColumnAlias:(const char *)arg1;
- (_Bool)isNullForColumnName:(const char *)arg1 table:(const char *)arg2;
- (id)getDoubleAsNSNumberForColumnName:(const char *)arg1 table:(const char *)arg2;
- (double)getDoubleForColumnName:(const char *)arg1 table:(const char *)arg2;
- (id)getInt64AsNSNumberForColumnName:(const char *)arg1 table:(const char *)arg2;
- (long long)getInt64ForColumnName:(const char *)arg1 table:(const char *)arg2;
- (long long)getIntegerForColumnName:(const char *)arg1 table:(const char *)arg2;
- (id)getNSDataForColumnName:(const char *)arg1 table:(const char *)arg2;
- (id)getNSStringForColumnName:(const char *)arg1 table:(const char *)arg2;
- (id)getDoubleAsNSNumberForColumn:(int)arg1;
- (double)getDoubleForColumn:(int)arg1;
- (id)getInt64AsNSNumberForColumn:(int)arg1;
- (long long)getInt64ForColumn:(int)arg1;
- (long long)getIntegerForColumn:(int)arg1;
- (id)getNSDataForColumn:(int)arg1;
- (id)getNSStringForColumn:(int)arg1;
- (int)bindParam:(int)arg1 toNSDictionary:(id)arg2;
- (int)bindParam:(int)arg1 toNSOrderedSet:(id)arg2;
- (int)bindParam:(int)arg1 toNSSet:(id)arg2;
- (int)bindParam:(int)arg1 toNSArray:(id)arg2;
- (int)bindParam:(int)arg1 toNSIndexSet:(id)arg2;
- (int)_bindParam:(int)arg1 toCollection:(id)arg2 sqliteMethodName:(const char *)arg3;
- (int)bindParam:(int)arg1 toDoubleAsNSNumber:(id)arg2;
- (int)bindParam:(int)arg1 toDouble:(double)arg2;
- (int)bindParam:(int)arg1 toInt64AsNSNumber:(id)arg2;
- (int)bindParam:(int)arg1 toInt64:(long long)arg2;
- (int)bindParam:(int)arg1 toInteger:(long long)arg2;
- (int)bindParam:(int)arg1 toNSData:(id)arg2;
- (int)bindParam:(int)arg1 toNSString:(id)arg2;
- (int)bindParamToNull:(int)arg1;
- (int)bindNamedParam:(const char *)arg1 toNSDictionary:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSOrderedSet:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSSet:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSArray:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSIndexSet:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toDoubleAsNSNumber:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toDouble:(double)arg2;
- (int)bindNamedParam:(const char *)arg1 toInt64AsNSNumber:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toInt64:(long long)arg2;
- (int)bindNamedParam:(const char *)arg1 toInteger:(long long)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSData:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSString:(id)arg2;
- (int)bindNamedParamToNull:(const char *)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)prepareForRowDeserialization;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initWithStatementPointer:(struct sqlite3_stmt *)arg1 owner:(id)arg2;

@end

