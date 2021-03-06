//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REScriptASTNode.h>

@class NSDictionary, REScriptToken;

@interface REScriptASTRuleNode : REScriptASTNode
{
    REScriptToken *_type;
    REScriptToken *_name;
    NSDictionary *_options;
    REScriptASTNode *_expression;
}

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) REScriptASTNode *expression; // @synthesize expression=_expression;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) REScriptToken *name; // @synthesize name=_name;
@property(readonly, nonatomic) REScriptToken *type; // @synthesize type=_type;
- (id)dependencies;
- (id)initWithType:(id)arg1 options:(id)arg2 name:(id)arg3 expression:(id)arg4;

@end

