//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLValueExpressable-Protocol.h>

@class NSString;
@protocol EFSQLValueExpressable;

@interface EFSQLUnaryExpression : NSObject <EFSQLValueExpressable>
{
    id <EFSQLValueExpressable> _expression;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <EFSQLValueExpressable> expression; // @synthesize expression=_expression;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;
- (id)initWithExpression:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

