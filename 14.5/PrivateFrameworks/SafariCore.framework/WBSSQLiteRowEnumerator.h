//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class WBSSQLiteRow, WBSSQLiteStatement;

@interface WBSSQLiteRowEnumerator : NSEnumerator
{
    WBSSQLiteStatement *_statement;
    WBSSQLiteRow *_row;
    int _lastResultCode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int lastResultCode; // @synthesize lastResultCode=_lastResultCode;
@property(readonly, nonatomic) WBSSQLiteStatement *statement; // @synthesize statement=_statement;
- (id)nextObject;
- (id)initWithResultsOfStatement:(id)arg1;

@end

