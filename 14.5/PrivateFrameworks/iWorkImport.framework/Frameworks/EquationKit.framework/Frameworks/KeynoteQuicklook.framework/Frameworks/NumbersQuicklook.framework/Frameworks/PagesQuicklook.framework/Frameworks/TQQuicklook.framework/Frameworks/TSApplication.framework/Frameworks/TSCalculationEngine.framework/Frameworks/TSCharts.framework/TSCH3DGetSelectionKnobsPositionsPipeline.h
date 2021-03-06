//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DSceneRenderPipeline.h>

#import <TSCharts/TSCH3DSceneObjectDelegator-Protocol.h>

@class NSArray, NSMutableArray, TSCH3DChartRep, TSCH3DGetSelectionKnobsPositionsPipelineDelegate;

@interface TSCH3DGetSelectionKnobsPositionsPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator>
{
    TSCH3DChartRep *_rep;
    TSCH3DGetSelectionKnobsPositionsPipelineDelegate *_sceneObjectDelegate;
    NSArray *_selection;
    NSMutableArray *_projectedPoints;
    float _normalizedKnobRadius;
}

+ (id)pipelineWithRep:(id)arg1 scene:(id)arg2 selection:(id)arg3 normalizedKnobRadius:(float)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *projectedPoints; // @synthesize projectedPoints=_projectedPoints;
- (id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2;
- (id)makeDelegateWithScene:(id)arg1;
- (_Bool)render;
- (void)getSelectionKnobsPositions:(id)arg1;
- (id)initWithRep:(id)arg1 scene:(id)arg2 selection:(id)arg3 normalizedKnobRadius:(float)arg4;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1;

@end

