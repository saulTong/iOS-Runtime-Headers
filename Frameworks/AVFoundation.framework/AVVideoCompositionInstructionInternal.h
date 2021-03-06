/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVVideoCompositionInstructionInternal : NSObject {
    struct CGColor { } *backgroundColor;
    BOOL enablePostProcessing;
    NSArray *layerInstructions;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    } timeRange;
}

@end
