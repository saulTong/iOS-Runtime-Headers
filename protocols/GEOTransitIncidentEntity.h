/* Generated by RuntimeBrowser.
 */

@protocol GEOTransitIncidentEntity <NSObject>

@required

- (BOOL)affectsSequence:(id <GEOTransitDepartureSequence>)arg1;
- (BOOL)hasNextStopIDs;
- (unsigned long long)muid;
- (NSSet *)nextStopIDs;

@end